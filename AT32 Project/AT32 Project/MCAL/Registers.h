/*
 * Registers.h
 *
 * Created: 10/12/2022 8:08:29 AM
 *  Author: Home
 */ 

#include "../Utility/STD_Types.h"

#ifndef REGISTERS_H_
#define REGISTERS_H_

// Port A registers
#define DDRA  		*((volatile uint8_t*)0x3A)
#define PORTA		*((volatile uint8_t*)0x3B)
#define PINA		*((volatile uint8_t*)0x39)

// Port B registers
#define DDRB  		*((volatile uint8_t*)0x37)
#define PORTB		*((volatile uint8_t*)0x38)
#define PINB		*((volatile uint8_t*)0x36)

// Port C registers
#define DDRC  		*((volatile uint8_t*)0x34)
#define PORTC		*((volatile uint8_t*)0x35)
#define PINC		*((volatile uint8_t*)0x33)

// Port D registers
#define DDRD  		*((volatile uint8_t*)0x31)
#define PORTD		*((volatile uint8_t*)0x32)
#define PIND		*((volatile uint8_t*)0x30)

//Timer0 Registers
#define TCCR0		*((volatile uint8_t*)0x53)
#define TCNT0		*((volatile uint8_t*)0x52)
#define TIFR		*((volatile uint8_t*)0x58)

//interrupt registers
#define MCUCR		*((volatile uint8_t*)0x55)
#define MCUCSR		*((volatile uint8_t*)0x54)
#define GICR		*((volatile uint8_t*)0x5B)
#define GIFR		*((volatile uint8_t*)0x5A)

#endif /* REGISTERS_H_ */