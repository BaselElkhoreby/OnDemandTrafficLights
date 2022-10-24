/*
 * AT32 Project.c
 *
 * Created: 10/10/2022 8:09:33 AM
 * Author : Home
 */ 


#include "App/App.h"
uint8_t IsButtonPressed = 0;
uint8_t Light = CarYellow;

int main(void)
{
Appinit();
while (1)
	{
	AppStart(&IsButtonPressed,&Light);
	}
}

ISR (EXT_INT_2)
{
	
	if (!IsButtonPressed && (Light != PedestrianYellow && Light != CarRed))
	{
		LED_off(Port_A,CarGreen);
		LED_on(Port_C,PedestrianRed);
		LED_on(Port_A,CarYellow);
		LED_on(Port_C,PedestrianYellow);
		Light = CarGreen;
		IsButtonPressed =1 ;
	}
		
		
	
}