/*
 * LED.c
 *
 * Created: 10/12/2022 8:47:34 PM
 *  Author: Home
 */ 

#include "button.h"

ButtonError Button_init(uint8_t PortNumber,uint8_t PinNumber)
{
	
	if (PortNumber > 3 || PortNumber <0)
	{
		return InvalidButtonPort;
	}
	if(PinNumber>7 || PinNumber <0)
	{
		return InvalidButtonPin;
	}
	DIO_init(PortNumber,PinNumber,INPUT);
	return ButtonOk;
}

ButtonError Button_read(uint8_t PortNumber,uint8_t PinNumber,uint8_t *value)
{
	
	if (PortNumber > 3 || PortNumber <0)
	{
		return InvalidButtonPort;
	}
	if(PinNumber>7 || PinNumber <0)
	{
		return InvalidButtonPin;
	}
	DIO_read(PortNumber,PinNumber,value);
	return ButtonOk;
}
