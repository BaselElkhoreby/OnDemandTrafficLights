/*
 * LED.h
 *
 * Created: 10/12/2022 5:53:20 PM
 *  Author: Home
 */ 


#ifndef LED_H_
#define LED_H_
//needed libraries
#include "../../Utility/STD_Types.h"
#include "../../MCAL/DIO/DIO.h"

//error enum
typedef enum LEDError {LEDOK,InvalidLEDPin,InvalidLEDPort}LEDError;

//function prototypes
LEDError LED_init(uint8_t ledPort, uint8_t ledPin);
LEDError LED_on(uint8_t ledPort, uint8_t ledPin);
LEDError LED_off(uint8_t ledPort, uint8_t ledPin);
LEDError LED_toggle(uint8_t ledPort, uint8_t ledPin);





#endif /* LED_H_ */