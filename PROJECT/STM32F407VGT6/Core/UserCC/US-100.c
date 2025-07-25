#include "US_100.h"
#include "string.h"
float filter_buffer[FILTER_SIZE];
uint8_t filter_index = 0;
float  dis;
uint8_t tem;
uint8_t US_100_receive_dis[2],US_100_receive_tem;

uint8_t US_100_Trig_distance = 0x55;
uint8_t US_100_Trig_tem = 0x50;

float get_filtered_distance(void) {
    // 发送触发命令
    HAL_UART_Transmit_DMA(&huart4, &US_100_Trig_distance, 1);
    HAL_Delay(10);

    // 接收数据前清空缓冲区（避免残留旧数据）

    HAL_UART_Receive_DMA(&huart4, US_100_receive_dis, 2);
    HAL_Delay(10);

    // 计算原始距离
    float raw_distance = ((US_100_receive_dis[0] * 256.0f) + US_100_receive_dis[1]) / 10.0f;

    // 校验数据有效性：只保留0~最大距离范围内的值
    if (raw_distance <= 0 || raw_distance > MAX_DISTANCE) {
        // 无效值：用缓冲区最后一个有效值替代（避免滤波异常）
        raw_distance = filter_buffer[(filter_index + FILTER_SIZE - 1) % FILTER_SIZE];
    }

    // 更新滤波缓冲区
    filter_buffer[filter_index] = raw_distance;
    filter_index = (filter_index + 1) % FILTER_SIZE;

    // 中值滤波（同前）
    float temp[FILTER_SIZE];
    memcpy(temp, filter_buffer, sizeof(temp));
    for (int i = 0; i < FILTER_SIZE-1; i++)
        for (int j = 0; j < FILTER_SIZE-1-i; j++)
            if (temp[j] > temp[j+1]) {
                float t = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = t;
            }
    return temp[FILTER_SIZE/2];
}
