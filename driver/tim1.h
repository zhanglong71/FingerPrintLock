#ifndef __TIM1_H
#define __TIM1_H
#include "stm8s.h"
 
void Tim1_Init(void);
void TimingDelay_Decrement(void);
void delay_ms( u32 nTime);
#endif