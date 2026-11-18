#include "stdint.h"
#include "stm32f4xx.h"
#include "stm32f429xx.h"
#define RCC_AHB1ENR             *(uint32_t*)(0x40023800UL+0x30UL)
#define RCC_AHB1ENR_GPIOFEN                 0x20UL
#define RCC_AHB1ENR_GPIOEEN                 0x10UL

#define GPIOF_MODER1            *(uint32_t*)(0x40021400UL+0x00UL)
#define GPIOF_OTYPER1            *(uint32_t*)(0x40021400UL+0x04UL)
#define GPIOF_OSPEEDR1           *(uint32_t*)(0x40021400UL+0x08UL)
#define GPIOF_PUPDR1             *(uint32_t*)(0x40021400UL+0x0CUL)
#define GPIOF_IDR1              *(uint32_t*)(0x40021400UL+0x10UL)
#define GPIOF_ODR1               *(uint32_t*)(0x40021400UL+0x14UL)
#define GPIOF_BSRR1              *(uint32_t*)(0x40021400UL+0x18UL)
#define GPIOF_MODEROUT9           0x40000UL
#define GPIOF_BSRRBS9           0x200UL
#define GPIOF_BSRRBR9           0x2000000UL


#define GPIOE_MODER1            *(uint32_t*)(0x40021000UL+0x00UL)
#define GPIOE_OTYPER1            *(uint32_t*)(0x40021000UL+0x04UL)
#define GPIOE_OSPEEDR1           *(uint32_t*)(0x40021000UL+0x08UL)
#define GPIOE_PUPDR1             *(uint32_t*)(0x40021000UL+0x0CUL)
#define GPIOE_IDR1              *(uint32_t*)(0x40021000UL+0x10UL)
#define GPIOE_ODR1               *(uint32_t*)(0x40021000UL+0x14UL)
#define GPIOE_BSRR1              *(uint32_t*)(0x40021000UL+0x18UL)


void _GPIO_Config_Memory(void);
void _GPIO_Config_Def(void);
void _GPIO_Config_CMSIS(void);
