/*
 * LED.h
 *
 * Created: 10/12/2022 8:47:19 PM
 *  Author: Home
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../Utility/STD_Types.h"
#include "../../MCAL/DIO/DIO.h"

//error enum
typedef enum ButtonError {ButtonOk,InvalidButtonPin,InvalidButtonPort}ButtonError;
//macros
#define HIGH 1
#define LOW 0

//function prototypes
ButtonError Button_init(uint8_t PortNumber,uint8_t PinNumber);
ButtonError Button_read(uint8_t PortNumber,uint8_t PinNumber,uint8_t* value);



#endif /* LED_H_ */