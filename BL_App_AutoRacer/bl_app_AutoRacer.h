
#ifndef BL_AUTORACER_H
#define BL_AUTORACER_H

#ifndef STM32F4XX_HAL
#define STM32F4XX_HAL
#include "stm32f4xx_hal.h"
#endif 
void bl_app_AutoRacerInit(void);
void bl_app_AutoRacerCyclic(void);

#endif