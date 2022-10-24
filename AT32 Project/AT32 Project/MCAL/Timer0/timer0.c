/*
 * timer0.c
 *
 * Created: 10/13/2022 2:20:50 PM
 *  Author: Home
 */ 
#include "timer0.h"

void Timer0_init()
{
	TCCR0 = 0x00;
	TCNT0 = 0x00;
}

void Timer0_delay( uint32_t delay)
{
	//calculate the number of overflows
	//tick is 1.024 as i'm using 1024 prescaler
	f32_t MaxDelay = 256 * Tick;
	uint16_t OverflowNumber = (uint16_t)ceil(delay/MaxDelay);
	uint8_t InitialValue = 256 - ((delay/Tick)/OverflowNumber);
	TCCR0 |= 5;
	while(OverflowNumber)
	{
		TCNT0 = InitialValue;
		while (!(TIFR & 1));
		TIFR |= 1;
		OverflowNumber--;
	}
	TCCR0 = 0x00;
}
