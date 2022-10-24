/*
 * Interrupts.c
 *
 * Created: 10/14/2022 5:07:28 AM
 *  Author: Home
 */ 
#include "Interrupts.h"

void EnableGlobalInterrupts()
{
	asm("sei");
}

void EnableINT2(uint8_t edge)
{
	if (edge == RisingEdge)
	{
		MCUCSR |= 1 << 6;
	} 
	else if (edge == FallingEdge)
	{
		MCUCSR &= ~(1<<6);
	}
	GICR |= 1<<5;
}
