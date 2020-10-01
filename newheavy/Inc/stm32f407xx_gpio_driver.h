/*
 * stm32f407xx_gpio_driver.h
 *
 *  Created on: 30-Sep-2020
 *      Author: Training
 */
#include "STM32F407xx.h"

#ifndef INC_STM32F407XX_GPIO_DRIVER_H_
#define INC_STM32F407XX_GPIO_DRIVER_H_


typedef struct
{
uint8_t GPIO_PinNumber;
uint8_t GPIO_PinMode;
uint8_t GPIO_PinSpeed;
uint8_t GPIO_PinOPtype;
uint8_t GPIO_PinPuPdControl;
uint8_t GPIO_PinAltFunMode;

}GPIO_PinConfig_t;

typedef struct
{
	GPIO_REGDEF_t *pGPIOx;
GPIO_PinConfig_t GPIO_PinConfig;
}GPIO_Handle_t;

// GPIO Pin Number of GPIOx

#define GPIO_Pin_No_0 0
#define GPIO_Pin_No_1 1
#define GPIO_Pin_No_2 2
#define GPIO_Pin_No_3 3
#define GPIO_Pin_No_4 4
#define GPIO_Pin_No_5 5
#define GPIO_Pin_No_6 6
#define GPIO_Pin_No_7 7
#define GPIO_Pin_No_8 8
#define GPIO_Pin_No_9 9
#define GPIO_Pin_No_10 10
#define GPIO_Pin_No_11 11
#define GPIO_Pin_No_12 12
#define GPIO_Pin_No_13 13
#define GPIO_Pin_No_14 14
#define GPIO_Pin_No_15 15

// GPIO Pin Mode

#define GPIO_MODE_IN 0
#define GPIO_MODE_OUT 1
#define GPIO_MODE_AFN 2
#define GPIO_ANALOG 3

// GPIO PinSpeed

#define GPIO_SPEED_LOW 0
#define GPIO_SPEED_MEDIUM 1
#define GPIO_SPEED_FAST 2
#define GPIO_SPEED_HIGH 3


// GPIO Pin output type
#define GPIO_OP_TYPE_PP 0
#define GPIO_OP_TYPE_OD 1

// GPIO PinPuPdControl

#define GPIO_NO_PUPD 0
#define GPIO_PIN_PU 1
#define GPIO_PI_PD 2

/*
//GPIO PinAltFunMode
#define GPIO_AF0 0
#define GPIO_AF1 1
#define GPIO_AF2 2
#define GPIO_AF3 3
#define GPIO_AF4 4
#define GPIO_AF5 5
#define GPIO_AF6 6
#define GPIO_AF7 7
#define GPIO_AF8 8
#define GPIO_AF9 9
#define GPIO_AF10 10
#define GPIO_AF11 11
#define GPIO_AF12 12
#define GPIO_AF13 13
#define GPIO_AF14 14
#define GPIO_AF15 15
*/

void GPIO_Init(GPIO_Handle_t *GPIOHandle);

void GPIO_DInit(GPIO_REGDEF_t *pGPIOx);

void GPIO_PeriClkCntrl(GPIO_REGDEF_t *pGPIOx, uint8_t EnorDi);

uint8_t GPIO_ReadFromInputPin(GPIO_REGDEF_t *pGPIOx, uint8_t PinNO);

uint16_t GPIO_ReadFromInputPort(GPIO_REGDEF_t *pGPIOx);

void GPIO_WriteToOutputPin(GPIO_REGDEF_t *pGPIOx, uint8_t PinNo, uint8_t value);

void GPIO_WriteToOutputPort(GPIO_REGDEF_t *pGPIOx, uint16_t);

void GPIO_ToggleOutputPin(GPIO_REGDEF_t *pGPIOx, uint8_t PinNo);









#endif /* INC_STM32F407XX_GPIO_DRIVER_H_ */
