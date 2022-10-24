/*
 * App.c
 *
 * Created: 10/14/2022 10:17:21 AM
 *  Author: Home
 */ 
#include "App.h"





void Appinit(void)
{
	//Initialize Car *Lights
	LED_init(Port_A,0);
	LED_init(Port_A,3);
	LED_init(Port_A,6);
	
	//initialize pedestrian buttons
	LED_init(Port_C,7);
	LED_init(Port_C,4);
	LED_init(Port_C,1);
	
	//intialize pedestrian button
	Button_init(Port_B,2);
	//timer init
	Timer0_init();
	
	//interrupt init
	EnableGlobalInterrupts();
	EnableINT2(RisingEdge);
	
}

void AppStart(uint8_t *IsButtonPressed,uint8_t *Light)
{
	//normal behaviour

		if  (*Light == CarYellow)
			{
				//Turn on green car Light and pedestrian red Light
			LED_on(Port_C,PedestrianRed);
			LED_off(Port_C,PedestrianYellow);
			LED_off(Port_C,PedestrianGreen);
		
			LED_on(Port_A,CarGreen);
			LED_off(Port_A,CarYellow);
			LED_off(Port_A,CarRed);
			*Light = CarGreen;
			Timer0_delay(5000);
			}
		
		
		 if (*Light == CarGreen || *Light == CarRed)
		
			{
				//Yellow blink for five seconds
				LED_off(Port_A,CarGreen);
				LED_off(Port_A,CarRed);
				
				LED_off(Port_C,PedestrianRed);
				LED_off(Port_C,PedestrianGreen);
				if (*Light == CarRed)
				{
					LED_on(Port_C,PedestrianGreen);
					*Light = CarYellow;
				}
				else if (*Light == CarGreen)
				{
					*Light = PedestrianYellow;
				}
				for (uint8_t i = 0;i<5;i++)
				{
					LED_on(Port_A,CarYellow);
					LED_on(Port_C,PedestrianYellow);
					Timer0_delay(500);
					LED_off(Port_A,CarYellow);
					LED_off(Port_C,PedestrianYellow);
					Timer0_delay(500);
				}
				
				
			}
		 if (*Light == PedestrianYellow )
		{
			// Turn on red car Lights
			LED_off(Port_C,PedestrianRed);
			LED_off(Port_C,PedestrianYellow);
			LED_on(Port_C,PedestrianGreen);
		
			LED_off(Port_A,CarGreen);
			LED_off(Port_A,CarYellow);
			LED_on(Port_A,CarRed);
			*Light = CarRed;
			Timer0_delay(5000);
			*IsButtonPressed = 0;
		}
		
	
}

