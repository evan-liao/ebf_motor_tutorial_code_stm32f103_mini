#ifndef __BSP_GENERAL_TIM_H
#define	__BSP_GENERAL_TIM_H

#include "stm32f1xx.h"


#define GENERAL_TIM                      TIM3
#define GENERAL_TIM_CLK_ENABLE()  			 __HAL_RCC_TIM3_CLK_ENABLE()

#define GENERAL_TIM_IRQ                  TIM3_IRQn
#define GENERAL_TIM_INT_IRQHandler       TIM3_IRQHandler

extern TIM_HandleTypeDef TIM_TimeBaseStructure;

void TIMx_Configuration(void);

#endif /* __BASIC_TIM_H */

