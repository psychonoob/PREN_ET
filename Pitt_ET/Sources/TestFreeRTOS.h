/*
 * TestFreeRTOS.h
 *
 *  Created on: Mar 10, 2017
 *      Author: Martina M
 */

#ifndef TESTFREERTOS_H_
#define TESTFREERTOS_H_

#include "Wait1.h"

#include "DIR_R.h"
#include "DIR_L.h"
#include "speed_R.h"
#include "speed_L.h"

#include "LED1.h"

#include "FRTOS1.h"


//#include "Test.h"

#endif /* TESTFREERTOS_H_ */

 // Seter - Methoden
 void setSpeedR(uint8_t);
 void setSpeedL(uint8_t);
 void setDirR(uint8_t);
 void setDirL(uint8_t);
 
 // Tasks
 void MotorR(void*);
 void MotorL(void*);
 void StateMachine(void*);
 void Motor(void*);
 
