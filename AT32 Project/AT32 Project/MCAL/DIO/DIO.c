/*
 * DIO.c
 *
 * Created: 10/12/2022 4:50:33 PM
 *  Author: Home
 */ 

#include "DIO.h"


DIOError DIO_init(uint8_t portNumber,uint8_t PinNumber, uint8_t Direction)
{
	if (portNumber > 3 || portNumber <0)
	{
		return InvalidPortNumber;
	}
	if(PinNumber>7 || PinNumber <0)
	{
		return InvalidPinNumber;
	}
	switch (portNumber)
	{
		case Port_A:
			if(Direction == INPUT)
			{
				DDRA &= ~(1<<PinNumber);
				return DIO_Ok;
			}
			else if (Direction == OUTPUT)
			{
				DDRA |= (1 << PinNumber);
				return DIO_Ok;
			}
			else
			{
				return InvalidDirection;
			}
		break;
		
		case Port_B:
			if(Direction == INPUT)
			{
				DDRB &= ~(1<<PinNumber);
				return DIO_Ok;
			}
			else if (Direction == OUTPUT)
			{
				DDRB |= (1 << PinNumber);
				return DIO_Ok;
			}
			else
			{
				return InvalidDirection;
			}
		break;
		
		case Port_C:
			if(Direction == INPUT)
			{
				DDRC &= ~(1<<PinNumber);
				return DIO_Ok;
			}
			else if (Direction == OUTPUT)
			{
				DDRC |= (1 << PinNumber);
				return DIO_Ok;
			}
			else
			{
				return InvalidDirection;
			}
		break;
		
		case Port_D:
			if(Direction == INPUT)
			{
				DDRD &= ~(1<<PinNumber);
				return DIO_Ok;
			}
			else if (Direction == OUTPUT)
			{
				DDRD|= (1 << PinNumber);
				return DIO_Ok;
			}
			else
			{
				return InvalidDirection;
			}
			break;
	}
}

DIOError DIO_write(uint8_t portNumber,uint8_t PinNumber, uint8_t Data)
{
	if (portNumber > 3 || portNumber <0)
	{
		return InvalidPortNumber;
	}
	if(PinNumber>7 || PinNumber <0)
	{
		return InvalidPinNumber;
	}
	switch (portNumber)
	{
		case Port_A:
		if(Data== LOW)
		{
			PORTA &= ~(1<<PinNumber);
			return DIO_Ok;
		}
		else if (Data== HIGH)
		{
			PORTA |= (1 << PinNumber);
			return DIO_Ok;
		}
		else
		{
			return InvalidOutput;
			return DIO_Ok;
		}
		break;
		
		case Port_B:
		if(Data== LOW)
		{
			PORTB &= ~(1<<PinNumber);
			return DIO_Ok;
		}
		else if (Data== HIGH)
		{
			PORTB |= (1 << PinNumber);
			return DIO_Ok;
		}
		else
		{
			//error handling
			return InvalidOutput;
		}
		break;
		
		case Port_C:
		if(Data== LOW)
		{
			PORTC &= ~(1<<PinNumber);
			return DIO_Ok;
		}
		else if (Data== HIGH)
		{
			PORTC |= (1 << PinNumber);
			return DIO_Ok;
		}
		else
		{
			//error handling
			return InvalidOutput;
		}
		break;
		
		case Port_D:
		if(Data== LOW)
		{
			PORTD &= ~(1<<PinNumber);
			return DIO_Ok;
		}
		else if (Data== HIGH)
		{
			PORTD|= (1 << PinNumber);
			return DIO_Ok;
		}
		else
		{
			//error handling
			return InvalidOutput;
		}
		break;
	}
}

DIOError DIO_read(uint8_t portNumber,uint8_t PinNumber,uint8_t* value)
{
	if (portNumber > 3 || portNumber <0)
	{
		return InvalidPortNumber;
	}
	if(PinNumber>7 || PinNumber <0)
	{
		return InvalidPinNumber;
	}
	
	switch (portNumber)
	{
		case Port_A:
			*value = (PINA & (1<<PinNumber))>>PinNumber;
			return DIO_Ok;
			break;
		case Port_B:
			*value = (PINB & (1<<PinNumber))>>PinNumber;
			return DIO_Ok;
			break;
		case Port_C:
			*value = (PINC & (1<<PinNumber))>>PinNumber;
			return DIO_Ok;
			break;
		case Port_D:
			*value = (PIND & (1<<PinNumber))>>PinNumber;
			return DIO_Ok;
			break;
	}
}

DIOError DIO_toggle(uint8_t portNumber,uint8_t PinNumber)
{
	if (portNumber > 3 || portNumber <0)
	{
		return InvalidPortNumber;
	}
	if(PinNumber>7 || PinNumber <0)
	{
		return InvalidPinNumber;
	}
	
	switch (portNumber)
	{
		case Port_A:
		PORTA ^= (1<< PinNumber);
		return DIO_Ok;
		break;
		
		case Port_B:
		PORTB ^= (1<<PinNumber);
		return DIO_Ok;
		break;
		
		case Port_C:
		PORTC ^= (1<<PinNumber);
		return DIO_Ok;
		break;
		
		case Port_D:
		PORTD ^= (1<<PinNumber);
		return DIO_Ok;
		break;
	}
}
