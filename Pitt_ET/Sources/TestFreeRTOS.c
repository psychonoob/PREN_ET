/*
 * TestFreeRTOS.c
 *
 *  Created on: Mar 10, 2017
 *      Author: Martina M
 */
#include "TestFreeRTOS.h"



TickType_t speedR;
TickType_t speedL;

uint8_t dirR;
uint8_t dirL;

void setSpeedR(uint8_t speed)
{
	speedR = speed;
}

void setSpeedL(uint8_t speed)
{
	speedL = speed;
}

void setDirR(uint8_t dir)
{
	dirR = dir;
}

void setDirL(uint8_t dir)
{
	dirL = dir;
}


 void MotorR(void *pvParameters) {
  (void)pvParameters; /* parameter not used */
  
  TickType_t xLastWakeTime;
  TickType_t xFrequency = 1000;
  xLastWakeTime = xTaskGetTickCount();
  
  for(;;) {
 // do something
	  xFrequency = speedR;
	  xFrequency = 800; //Test Wert
	  FRTOS1_vTaskDelayUntil(&xLastWakeTime,xFrequency/portTICK_RATE_MS); 	// wait milisec
	  speed_R_SetVal(speed_R_DeviceData);									// pos Flanke
	  
	  xFrequency = 10;														
	  xFrequency = 400; //Test Wert
	  FRTOS1_vTaskDelayUntil(&xLastWakeTime,xFrequency/portTICK_RATE_MS);	// wait short
	  speed_R_ClrVal(speed_R_DeviceData);									// neg Flanke
	  
	  if(dirR > 0){						  // Richtung definineren
		  DIR_R_SetVal(DIR_R_DeviceData); // Richtung definieren 1
	  }else{
		  DIR_R_ClrVal(DIR_R_DeviceData); // Richtung definieren 0  
	  }
	  
  }
}
 
 
 void MotorL(void *pvParameters) {
   (void)pvParameters; /* parameter not used */
   
   TickType_t xLastWakeTime;
   TickType_t xFrequency = 1000;
   xLastWakeTime = xTaskGetTickCount();
   
   for(;;) {
  // do something
 	  xFrequency = speedR;
 	  xFrequency = 800; //Test Wert
 	  FRTOS1_vTaskDelayUntil(&xLastWakeTime,xFrequency/portTICK_RATE_MS); 	// wait milisec
 	  speed_L_SetVal(speed_L_DeviceData);									// pos Flanke
 	  
 	  xFrequency = 10;														
 	  xFrequency = 400; //Test Wert
 	  FRTOS1_vTaskDelayUntil(&xLastWakeTime,xFrequency/portTICK_RATE_MS);	// wait short
 	  speed_L_ClrVal(speed_L_DeviceData);									// neg Flanke
 	  
	  if(dirL > 0){						  // Richtung definineren
		  DIR_L_SetVal(DIR_L_DeviceData); // Richtung definieren 1
	  }else{
		  DIR_L_ClrVal(DIR_L_DeviceData); // Richtung definieren 0  
	  }
   }
 }

 // Test Task
 void Motor(void *pvParameters) {
  (void)pvParameters; /* parameter not used */
  
  TickType_t xLastWakeTime;
  TickType_t xFrequency = 1000;
  xLastWakeTime = xTaskGetTickCount();
  
  
  for(;;) {

	  xFrequency = 400; //Test Wert
	  FRTOS1_vTaskDelayUntil(&xLastWakeTime,xFrequency/portTICK_RATE_MS); 	// wait milisec
					
	  LED1_Neg(); // f�r Testzweck
	  												
	  xFrequency = 200; //Test Wert
	  FRTOS1_vTaskDelayUntil(&xLastWakeTime,xFrequency/portTICK_RATE_MS);	// wait short
	  									// neg Flanke
	  LED1_Neg(); // f�r Testzweck
  }
}
 
 void StateMachine(void *pvParameters) {
    (void)pvParameters; /* parameter not used */
    
    TickType_t xLastWakeTime;
    TickType_t xFrequency = 1000;		//muss die Statemaschine "ausgebremst" werden?
    xLastWakeTime = xTaskGetTickCount(); 
    
    uint8_t state = 1;	
    
    for(;;) {
   // do something
  	  
  	  xFrequency = 800; //Test Wert
  	  FRTOS1_vTaskDelayUntil(&xLastWakeTime,xFrequency/portTICK_RATE_MS); 	// wait milisec
  	  
  	  switch(state){
  	  case 1:
  	  	  // Linker oder Rechter Parcour? 
  	  	  // Hardware Schalter einlesen
  	  	  state = 2;
  	  	  break;
  	  case 2:
  		  // If Startsymbol via USB erhalten
  		  state = 3;
  		  // Else 
  		  state = 2;
  		  break;
  	  case 3:
  		  // Anfahren
  		  state = 4;
  		  break;
  	  case 4:
  		  // If zu rechts 
  		  //	fahre bizi links
  		  // If zu links
  		  // 	fahre bizi rechts
  		  // Else 
  		  // 	fahre gerade aus
  		  
  		  // If Kurve erreicht
  		  //  	fahre Kurve
  		  state = 5;
  		  break;
  	  case 5:
  		  // IF Zahl erkannt
  		  // 	fahre korrekten abstand
  		  break;
  	
  	  
  	  }
  	  
  	  
  	  
  	 
    }
  }
