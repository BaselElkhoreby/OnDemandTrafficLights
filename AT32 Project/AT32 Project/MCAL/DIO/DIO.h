/*
 * DIO.h
 *
 * Created: 10/12/2022 4:50:45 PM
 *  Author: Home
 */ 


#ifndef DIO_H_
#define DIO_H_

//required libraries
#include "../../Utility/STD_Types.h"
#include "../Registers.h"

//Macros
//port macros
#define Port_A		0
#define Port_B		1
#define Port_C		2
#define Port_D		3

//Direction macros
#define INPUT		0
#define OUTPUT		1

//Value macros
#define LOW			0
#define HIGH		1

//Error sate enum
 typedef enum DIOError {DIO_Ok,InvalidPinNumber,InvalidPortNumber,InvalidDirection,InvalidOutput}DIOError;

// Function prototypes

DIOError DIO_init(uint8_t portNumber,uint8_t PinNumber, uint8_t Direction);
DIOError DIO_write(uint8_t portNumber,uint8_t PinNumber, uint8_t Data);
DIOError DIO_read(uint8_t portNumber,uint8_t PinNumber,uint8_t* value);
DIOError DIO_toggle(uint8_t portNumber,uint8_t PinNumber);




#endif /* DIO_H_ */