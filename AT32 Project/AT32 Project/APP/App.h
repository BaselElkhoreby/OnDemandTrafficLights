/*
 * App.h
 *
 * Created: 10/14/2022 10:17:36 AM
 *  Author: Home
 */ 


#ifndef APP_H_
#define APP_H_

#include "../Utility/STD_Types.h"
#include "../MCAL/Timer0/timer0.h"
#include "../MCAL/Interrupts/Interrupts.h"
#include "../ECUAL/Button/button.h"
#include "../ECUAL/LED/LED.h"

//light defenitions
#define CarRed		6
#define CarYellow	3
#define CarGreen	0

#define PedestrianRed		1
#define PedestrianYellow	4
#define PedestrianGreen		7

void Appinit(void);
void AppStart(uint8_t *IsButtonPressed,uint8_t *Light);





#endif /* APP_H_ */