/*---------------------------------------------------------------------------------------
 * File Name  : ultrasonic.c
 * Description: Ultrasonic module source file
 * Date 	  : 28/4/2023
 * Author	  : Mohamed Abdelhamid sayed
 *-------------------------------------------------------------------------------------*/

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "std_types.h"


void ULTRASONIC_init (void);

void ULTRASONIC_Trigger (void);

uint16 ULTRASONIC_readDistance (void);

void  ULTRASONIC_edgeProcessing (void);


#endif /* ULTRASONIC_H_ */
