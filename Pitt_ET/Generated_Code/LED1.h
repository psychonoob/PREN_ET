/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : LED1.h
**     Project     : Pitt_ET
**     Processor   : MKL25Z128VLK4
**     Component   : LED
**     Version     : Component 01.072, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2017-03-24, 09:59, # CodeGen: 33
**     Abstract    :
**          This component implements a universal driver for a single LED.
**     Settings    :
**          Component name                                 : LED1
**          Turned On with initialization                  : no
**          HW Interface                                   : 
**            On/Off                                       : Enabled
**              Pin                                        : LEDpin
**            PWM                                          : Disabled
**            High Value means ON                          : no
**          Shell                                          : Disabled
**     Contents    :
**         On         - void LED1_On(void);
**         Off        - void LED1_Off(void);
**         Neg        - void LED1_Neg(void);
**         Get        - uint8_t LED1_Get(void);
**         Put        - void LED1_Put(uint8_t val);
**         SetRatio16 - void LED1_SetRatio16(uint16_t ratio);
**         Deinit     - void LED1_Deinit(void);
**         Init       - void LED1_Init(void);
**
**     License   : Open Source (LGPL)
**     Copyright : Erich Styger, 2013-2016, all rights reserved.
**     Web       : www.mcuoneclipse.com
**     This an open source software implementing a driver using Processor Expert.
**     This is a free software and is opened for education, research and commercial developments under license policy of following terms:
**     * This is a free software and there is NO WARRANTY.
**     * No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     * Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file LED1.h
** @version 01.00
** @brief
**          This component implements a universal driver for a single LED.
*/         
/*!
**  @addtogroup LED1_module LED1 module documentation
**  @{
*/         

#ifndef __LED1_H
#define __LED1_H

/* MODULE LED1. */
#ifndef __HIWARE__ /* Hiware compiler (S08, S12) only supports C89 */
  #include <stdint.h>
#endif
/* Include inherited beans */
#include "KSDK1.h"
#include "LEDpin1.h"

#if KSDK1_SDK_VERSION_USED == KSDK1_SDK_VERSION_NONE
  /* Include shared modules, which are used for whole project */
  #include "PE_Types.h"
  #include "PE_Error.h"
  #include "PE_Const.h"
  #include "IO_Map.h"
  #include "Cpu.h"
#endif


#define LED1_ClrVal()    LEDpin1_ClrVal() /* put the pin on low level */
#define LED1_SetVal()    LEDpin1_SetVal() /* put the pin on high level */
#define LED1_SetInput()  LEDpin1_SetInput() /* use the pin as input pin */
#define LED1_SetOutput() LEDpin1_SetOutput() /* use the pin as output pin */

#define LED1_PARSE_COMMAND_ENABLED  0 /* set to 1 if method ParseCommand() is present, 0 otherwise */


#define LED1_On() LEDpin1_ClrVal()
/*
** ===================================================================
**     Method      :  LED1_On (component LED)
**     Description :
**         This turns the LED on.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LED1_Off() LEDpin1_SetVal()
/*
** ===================================================================
**     Method      :  LED1_Off (component LED)
**     Description :
**         This turns the LED off.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LED1_Neg() LEDpin1_NegVal()
/*
** ===================================================================
**     Method      :  LED1_Neg (component LED)
**     Description :
**         This negates/toggles the LED
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LED1_Get() (!(LEDpin1_GetVal()))
/*
** ===================================================================
**     Method      :  LED1_Get (component LED)
**     Description :
**         This returns logical 1 in case the LED is on, 0 otherwise.
**     Parameters  : None
**     Returns     :
**         ---             - Status of the LED (on or off)
** ===================================================================
*/

void LED1_Init(void);
/*
** ===================================================================
**     Method      :  LED1_Init (component LED)
**     Description :
**         Performs the LED driver initialization.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LED1_Put(val)  ((val) ? LED1_On() : LED1_Off())
/*
** ===================================================================
**     Method      :  LED1_Put (component LED)
**     Description :
**         Turns the LED on or off.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - value to define if the LED has to be on or
**                           off.
**     Returns     : Nothing
** ===================================================================
*/

void LED1_Deinit(void);
/*
** ===================================================================
**     Method      :  LED1_Deinit (component LED)
**     Description :
**         Deinitializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LED1_SetRatio16(uint16_t ratio);
/*
** ===================================================================
**     Method      :  LED1_SetRatio16 (component LED)
**     Description :
**         Method to specify the duty cycle. If using a PWM pin, this
**         means the duty cycle is set. For On/off pins, values smaller
**         0x7FFF means off, while values greater means on.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ratio           - Ratio value, where 0 means 'off' and
**                           0xffff means 'on'
**     Returns     : Nothing
** ===================================================================
*/

/* END LED1. */

#endif
/* ifndef __LED1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
