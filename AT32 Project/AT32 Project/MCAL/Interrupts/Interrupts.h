/*
 * Interrupts.h
 *
 * Created: 10/14/2022 5:07:13 AM
 *  Author: Home
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_
#include "../../Utility/STD_Types.h"
#include "../Registers.h"

#define EXT_INT_2 __vector_3

#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)

#define RisingEdge	1
#define FallingEdge	0


void EnableGlobalInterrupts();
void EnableINT2(uint8_t edge);


#endif /* INTERRUPTS_H_ */