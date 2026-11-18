#include "init.h"
/**
 * @breif Настройка вывода PF8 c помощью прямого обращения к памяти
 */
void _GPIO_Config_Memory(void){
    *(uint32_t*)(0x40023800UL+0x30UL)|=0x20UL+0x10UL;//Тактирование
    *(uint32_t*)(0x40021400UL+0x00UL)|=0x10000UL; //Настройка работы 8ого пина на Output
    *(uint32_t*)(0x40021400UL+0x04UL)=0x0UL; //OTYPER clear
    *(uint32_t*)(0x40021400UL+0x08UL)&=0x0UL;//настройка скорости для 8ого пина на среднюю
    *(uint32_t*)(0x40021400UL+0x18UL)|=0x1000000UL;//PF8 reset
}
/**
 * @breif Настройка вывод PF9 с помощью своих макросов
 */
void _GPIO_Config_Def(void){
    RCC_AHB1ENR|=RCC_AHB1ENR_GPIOFEN+RCC_AHB1ENR_GPIOEEN; //GBIOF and GBIOE clock enable
    GPIOF_MODER1|=GPIOF_MODEROUT9;
    GPIOF_BSRR1|=GPIOF_BSRRBR9;

}
/**
 * @breif Настройка вывода PF10 c помощью библиотек
 */
void _GPIO_Config_CMSIS(void){
    SET_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOFEN);
    SET_BIT(GPIOF->MODER,GPIO_MODER_MODE10_0);
    SET_BIT(GPIOF->BSRR,GPIO_BSRR_BR10);

}

