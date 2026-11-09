#include "stdint.h"
#include "stm32f4xx.h"
#include "stm32f429xx.h"
#define RCC_AHB1ENR             *(uint32_t)(0x40023800UL+0x30UL)
#define RCC_AHB1ENR_GBIOBEN     0x02UL
#define RCC_AHB1ENR_GBIOCEN     0x04UL
void _GPIO_Config_Memory(void);
void _GPIO_Config_Def(void);
void _GPIO_Config_CMSIS(void);
