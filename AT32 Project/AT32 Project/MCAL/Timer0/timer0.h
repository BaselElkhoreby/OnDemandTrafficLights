/*
 * timer0.h
 *
 * Created: 10/13/2022 2:20:37 PM
 *  Author: Home
 */ 


#ifndef TIMER0_H_
#define TIMER0_H_

#include "../../Utility/STD_Types.h"
#include "../Registers.h"
#include "math.h"
//macros
#define Tick 1.024

//function prototypes
void Timer0_init ();
void Timer0_delay(uint32_t Delay);



#endif /* TIMER0_H_ */