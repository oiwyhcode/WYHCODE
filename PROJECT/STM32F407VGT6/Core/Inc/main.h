/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ENCODER_Pin GPIO_PIN_0
#define ENCODER_GPIO_Port GPIOA
#define ENCODER2_Pin GPIO_PIN_1
#define ENCODER2_GPIO_Port GPIOA
#define out1_Pin GPIO_PIN_10
#define out1_GPIO_Port GPIOE
#define out2_Pin GPIO_PIN_11
#define out2_GPIO_Port GPIOE
#define out3_Pin GPIO_PIN_12
#define out3_GPIO_Port GPIOE
#define out4_Pin GPIO_PIN_13
#define out4_GPIO_Port GPIOE
#define out5_Pin GPIO_PIN_14
#define out5_GPIO_Port GPIOE
#define PWM2_Pin GPIO_PIN_14
#define PWM2_GPIO_Port GPIOB
#define PWM1_Pin GPIO_PIN_15
#define PWM1_GPIO_Port GPIOB
#define motorB1_Pin GPIO_PIN_9
#define motorB1_GPIO_Port GPIOD
#define motorA2_Pin GPIO_PIN_10
#define motorA2_GPIO_Port GPIOD
#define motorA1_Pin GPIO_PIN_11
#define motorA1_GPIO_Port GPIOD
#define MOTORB2_Pin GPIO_PIN_12
#define MOTORB2_GPIO_Port GPIOD
#define encoder_Pin GPIO_PIN_6
#define encoder_GPIO_Port GPIOC
#define encoder1_Pin GPIO_PIN_7
#define encoder1_GPIO_Port GPIOC
#define HC06_X_Pin GPIO_PIN_10
#define HC06_X_GPIO_Port GPIOC
#define HC06_RX_Pin GPIO_PIN_11
#define HC06_RX_GPIO_Port GPIOC

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
