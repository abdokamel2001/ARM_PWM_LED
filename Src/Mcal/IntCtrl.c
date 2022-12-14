/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  IntCtrl.c
 *        \brief  Nested Vector Interrupt Controller Driver
 *
 *      \details  The Driver Configure All MCU interrupts Priority into gorups and subgroups
 *                Enable NVIC Interrupt Gate for Peripherals
 *
 *********************************************************************************************************************/
#ifndef IntCtrl_H
#define IntCtrl_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Platform_Types.h"
#include "Std_Types.h"
#include "IntCtrl.h"
#include "Mcu_Hw.h"
#include "Timer.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/	

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/******************************************************************************
* \Syntax          : void SysTick_Handler(void)                                      
* \Description     : the built=-in interrupter when the systemtimer finish                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void SysTick_Handler(void){
    Not_Interrupted = LOW;
}

#endif
/**********************************************************************************************************************
 *  END OF FILE: IntCtrl.c
 *********************************************************************************************************************/
