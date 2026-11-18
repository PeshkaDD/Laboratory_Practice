#include "init.h"
int main(void){
    //
    _GPIO_Config_Def();
    _GPIO_Config_CMSIS();
    _GPIO_Config_Memory();

while(1){
    uint32_t redon=0x100UL;
    uint32_t redoff=0x1000000UL;
    uint32_t greenon=0x200UL;
    uint32_t greenoff=0x2000000UL;
    uint32_t blueon=0x400UL;
    uint32_t blueoff=0x4000000UL;

    if ((GPIOE_BSRR1 & 0x400UL)!=0){ //PE10
            GPIOF_BSRR1|=redon;// PF8 set
    }
    else{
        GPIOF_BSRR1|=redoff;// Reset PF8

    }
    if ((GPIOE_BSRR1 & 0x800UL)!=0){//PE11
            GPIOF_BSRR1|=greenon;// PF9 set
    }
    else{
        GPIOF_BSRR1|=greenoff;// Reset PF9

    }
    if ((GPIOE_BSRR1 & 0x1000UL)!=0){//PE12
            GPIOF_BSRR1|=blueon;// PF10 set
    }
    else{
        GPIOF_BSRR1|=blueoff;// Reset PF10

    }
    if ((GPIOE_BSRR1 & 0x2000UL)!=0){//PE13
            uint32_t whiteon=redon;
            uint32_t whiteoff=redoff;
            redon=blueon;
            redoff=blueoff;
            blueon=greenon;
            blueoff=greenoff;
            greenon=whiteon;
            greenoff=whiteoff;
    }
    
    
}
}