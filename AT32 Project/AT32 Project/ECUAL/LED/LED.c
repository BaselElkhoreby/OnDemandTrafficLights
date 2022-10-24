/*
 * LED.c
 *
 * Created: 10/12/2022 5:53:37 PM
 *  Author: Home
 */ 

#include "LED.h"

LEDError LED_init(uint8_t ledPort, uint8_t ledPin)
{
	if (ledPort > 3 || ledPort <0)
	{
		return InvalidLEDPort;
	}
	if(ledPin>7 || ledPin <0)
	{
		return InvalidLEDPin;
	}
	DIO_init(ledPort,ledPin,OUTPUT);
	return LEDOK;
}

LEDError LED_on(uint8_t ledPort, uint8_t ledPin)
{
	if (ledPort > 3 || ledPort <0)
	{
		return InvalidLEDPort;
	}
	if(ledPin>7 || ledPin <0)
	{
		return InvalidLEDPin;
	}
	DIO_write(ledPort,ledPin,HIGH);
	return LEDOK;
}

LEDError LED_off(uint8_t ledPort, uint8_t ledPin)
{
	if (ledPort > 3 || ledPort <0)
	{
		return InvalidLEDPort;
	}
	if(ledPin>7 || ledPin <0)
	{
		return InvalidLEDPin;
	}
	DIO_write(ledPort,ledPin,LOW);
	return LEDOK;
}

LEDError LED_toggle(uint8_t ledPort, uint8_t ledPin)
{
	if (ledPort > 3 || ledPort <0)
	{
		return InvalidLEDPort;
	}
	if(ledPin>7 || ledPin <0)
	{
		return InvalidLEDPin;
	}
	DIO_toggle(ledPort,ledPin);
	return LEDOK;
}

