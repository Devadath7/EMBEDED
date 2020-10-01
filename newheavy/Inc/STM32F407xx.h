/*
 * STM32F407xx.h
 *
 *  Created on: Sep 29, 2020
 *      Author: Training
 */
#include<stdint.h>

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_


//Base Address of memory

#define FLASH_BASEADDR 0x08000000UL
#define SRAM1_BASEADDR 0x20000000UL
#define SRAM2_BASEADDR 0x2001C000UL
#define SRAM_BASEADDR 0x20000000UL
#define ROM_BASEADDR 0x1FFF0000UL

// Base address of bus

#define APB1_BASEADDR 0x40000000UL
#define APB2_BASEADDR 0x40007C00UL
#define AHB1_BASEADDR 0x40020000UL
#define AHB2_BASEADDR 0x50000000UL
#define AHB3_BASEADDR 0xA0000000UL

// Base address of peripherals
//Base address of peripherals Peripherals hanging onto AHB1
#define GPIOA_BASEADDR (AHB1_BASEADDR + 0x0000UL)
#define GPIOB_BASEADDR (AHB1_BASEADDR + 0x0400UL)
#define GPIOC_BASEADDR (AHB1_BASEADDR + 0x0800UL)
#define GPIOD_BASEADDR (AHB1_BASEADDR + 0x0C00UL)
#define GPIOE_BASEADDR (AHB1_BASEADDR + 0x1000UL)
#define GPIOF_BASEADDR      (AHB1_BASEADDR + 0x1400UL)
#define GPIOG_BASEADDR      (AHB1_BASEADDR + 0x1800UL)
#define GPIOH_BASEADDR      (AHB1_BASEADDR + 0x1C00UL)
#define GPIOI_BASEADDR      (AHB1_BASEADDR + 0x2000UL)
#define CRC_BASEADDR (AHB1_BASEADDR + 0x3000UL)
#define RCC_BASEADDR (AHB1_BASEADDR + 0x3800UL)



//Base address of peripherals Peripherals hanging onto APB1
#define I2C1_BASEADDR    (APB1_BASEADDR + 0x5400UL)
#define I2C2_BASEADDR (APB1_BASEADDR + 0x5800UL)
#define I2C3_BASEADDR (APB1_BASEADDR + 0x5C00UL)
#define SPI2_BASEADDR (APB1_BASEADDR + 0x3800UL)
#define SPI3_BASEADDR (APB1_BASEADDR + 0x3C00UL)
#define USART2_BASEADDR (APB1_BASEADDR + 0x4400UL)
#define USART3_BASEADDR (APB1_BASEADDR + 0x4800UL)


//Base address of peripherals Peripherals hanging onto APB2

#define TIM1_BASEADDR       APB2_BASEADDR
#define TIM8_BASEADDR       (APB2_BASEADDR+0x0400UL)
#define USART1_BASEADDR     (APB2_BASEADDR+0x1000UL)
#define USART6_BASEADDR     (APB2_BASEADDR+0x1400UL)
#define ADC_BASEADDR        (APB2_BASEADDR+0x2000UL)
#define SDIO_BASEADDR       (APB2_BASEADDR+0x2C00UL)
#define SPI1_BASEADDR       (APB2_BASEADDR+0x3000UL)
#define SYSCFG_BASEADDR     (APB2_BASEADDR+0x3800UL)
#define EXTI_BASEADDR       (APB2_BASEADDR+0x3C00UL)





// Register structures of GPIO register
typedef struct
{
volatile uint32_t MODER;
volatile uint32_t OTYPER;
volatile uint32_t OSPEEDR;
volatile uint32_t PUPDR;
volatile uint32_t IDR;
volatile uint32_t ODR;
volatile uint32_t BSRR;
volatile uint32_t LCKR;
volatile uint32_t AFR[2];
//volatile uint32_t AFRH;

}GPIO_REGDEF_t;

// Peripheral definition

#define GPIOD               ((GPIO_REGDEF_t*)GPIOD_BASEADDR)

#define GPIOA               ((GPIO_REGDEF_t*)GPIOA_BASEADDR)
#define GPIOB               ((GPIO_REGDEF_t*)GPIOB_BASEADDR)
#define GPIOC               ((GPIO_REGDEF_t*)GPIOC_BASEADDR)

#define GPIOE               ((GPIO_REGDEF_t*)GPIOE_BASEADDR)
#define GPIOF               ((GPIO_REGDEF_t*)GPIOF_BASEADDR)
#define GPIOG               ((GPIO_REGDEF_t*)GPIOG_BASEADDR)
#define GPIOH               ((GPIO_REGDEF_t*)GPIOH_BASEADDR)
#define GPIOI               ((GPIO_REGDEF_t*)GPIOI_BASEADDR)





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t PLLCFGR;
  volatile uint32_t CFGR;
  volatile uint32_t CIR;
  volatile uint32_t AHB1RSTR;
  volatile uint32_t AHB2RSTR;
  volatile uint32_t AHB3RSTR;
  volatile uint32_t APB1RSTR;
  volatile uint32_t APB2RSTR;
  volatile uint32_t AHB1ENR;
  volatile uint32_t AHB2ENR;
  volatile uint32_t AHB3ENR;
  volatile uint32_t APB1ENR;
  volatile uint32_t APB2ENR;
  volatile uint32_t AHB1LPENR;
  volatile uint32_t AHB2LPENR;
  volatile uint32_t AHB3LPENR;
  volatile uint32_t APB1LPENR;
  volatile uint32_t APB2LPENR;
  volatile uint32_t BDCR;
  volatile uint32_t CSR;
  volatile uint32_t SSCGR;
  volatile uint32_t PLLI2SCFGR;

}RCC_REGDEF_t;

#define RCC ((RCC_REGDEF_t*) RCC_BASEADDR)

// Clock enable Macros for GPIOx

#define GPIOA_PCLK_EN() (RCC->AHB1ENR |= (1<<0))
#define GPIOB_PCLK_EN() (RCC->AHB1ENR |= (1<<1))
#define GPIOC_PCLK_EN() (RCC->AHB1ENR |= (1<<2))
#define GPIOD_PCLK_EN() (RCC->AHB1ENR |= (1<<3))
#define GPIOE_PCLK_EN() (RCC->AHB1ENR |= (1<<4))
#define GPIOF_PCLK_EN() (RCC->AHB1ENR |= (1<<5))
#define GPIOG_PCLK_EN() (RCC->AHB1ENR |= (1<<6))
#define GPIOH_PCLK_EN() (RCC->AHB1ENR |= (1<<7))
#define GPIOI_PCLK_EN() (RCC->AHB1ENR |= (1<<8))

// Clock disable Macros for GPIOx

#define GPIOA_PCLK_DI() (RCC->AHB1ENR &= ~(1<<0))
#define GPIOB_PCLK_DI() (RCC->AHB1ENR &= ~(1<<1))
#define GPIOC_PCLK_DI() (RCC->AHB1ENR &= ~(1<<2))
#define GPIOD_PCLK_DI() (RCC->AHB1ENR &= ~(1<<3))
#define GPIOE_PCLK_DI() (RCC->AHB1ENR &= ~(1<<4))
#define GPIOF_PCLK_DI() (RCC->AHB1ENR &= ~(1<<5))
#define GPIOG_PCLK_DI() (RCC->AHB1ENR &= ~(1<<6))
#define GPIOH_PCLK_DI() (RCC->AHB1ENR &= ~(1<<7))
#define GPIOI_PCLK_DI() (RCC->AHB1ENR &= ~(1<<8))

// Some important macros

#define ENABLE 			1
#define DISABLE 		0
#define SET 			ENABLE
#define RESET 			DISABLE
#define GPIO_Pin_Set 	SET
#define GPIO_Pin_Reset 	RESET

#define GPIOA_REG_RESET()			do{(RCC->AHB1RSTR|=1<<0);( RCC->AHB1RSTR&=~1<<0);}while(0)
#define GPIOB_REG_RESET()			do{(RCC->AHB1RSTR|=1<<1);( RCC->AHB1RSTR&=~1<<1);}while(0)
#define GPIOC_REG_RESET()			do{(RCC->AHB1RSTR|=1<<2);( RCC->AHB1RSTR&=~1<<2);}while(0)
#define GPIOD_REG_RESET()			do{(RCC->AHB1RSTR|=1<<3);( RCC->AHB1RSTR&=~1<<3);}while(0)
#define GPIOE_REG_RESET()			do{(RCC->AHB1RSTR|=1<<4);( RCC->AHB1RSTR&=~1<<4);}while(0)
#define GPIOF_REG_RESET()			do{(RCC->AHB1RSTR|=1<<5);( RCC->AHB1RSTR&=~1<<5);}while(0)
#define GPIOG_REG_RESET()			do{(RCC->AHB1RSTR|=1<<6);( RCC->AHB1RSTR&=~1<<6);}while(0)
#define GPIOH_REG_RESET()			do{(RCC->AHB1RSTR|=1<<7);( RCC->AHB1RSTR&=~1<<7);}while(0)
#define GPIOI_REG_RESET()			do{(RCC->AHB1RSTR|=1<<8);( RCC->AHB1RSTR&=~1<<8);}while(0)


#include "stm32f407xx_gpio_driver.h"

#endif /* INC_STM32F407XX_H_ */
