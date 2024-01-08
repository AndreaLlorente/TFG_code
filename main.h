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
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define I1_Pin GPIO_PIN_0
#define I1_GPIO_Port GPIOA
#define I2_Pin GPIO_PIN_1
#define I2_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define I3_Pin GPIO_PIN_4
#define I3_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define IS3_Pin GPIO_PIN_6
#define IS3_GPIO_Port GPIOA
#define IS2_Pin GPIO_PIN_7
#define IS2_GPIO_Port GPIOA
#define S2_Pin GPIO_PIN_10
#define S2_GPIO_Port GPIOB
#define Led3_Pin GPIO_PIN_13
#define Led3_GPIO_Port GPIOB
#define Led2_Pin GPIO_PIN_14
#define Led2_GPIO_Port GPIOB
#define Led1_Pin GPIO_PIN_15
#define Led1_GPIO_Port GPIOB
#define S3_Pin GPIO_PIN_8
#define S3_GPIO_Port GPIOA
#define OUT_MODE_Pin GPIO_PIN_9
#define OUT_MODE_GPIO_Port GPIOA
#define S0_Pin GPIO_PIN_10
#define S0_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define S1_Pin GPIO_PIN_5
#define S1_GPIO_Port GPIOB
#define IS1_Pin GPIO_PIN_6
#define IS1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
