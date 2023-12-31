/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32g0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "loadControl.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
extern UART_HandleTypeDef huart2;
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
#define GPIO_3_Pin GPIO_PIN_1
#define GPIO_3_GPIO_Port GPIOB
#define GPIO_2_Pin GPIO_PIN_11
#define GPIO_2_GPIO_Port GPIOA
#define GPIO_1_Pin GPIO_PIN_12
#define GPIO_1_GPIO_Port GPIOA
#define GPIO_LOAD_Pin GPIO_PIN_5
#define GPIO_LOAD_GPIO_Port GPIOB
#define GPIO_5_Pin GPIO_PIN_6
#define GPIO_5_GPIO_Port GPIOB
#define CONTROL_Pin GPIO_PIN_7
#define CONTROL_GPIO_Port GPIOB
#define CONTROL_EXTI_IRQn EXTI4_15_IRQn
#define GPIO_7_Pin GPIO_PIN_8
#define GPIO_7_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
