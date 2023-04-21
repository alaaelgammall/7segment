/*
 * main.c
 *
 *  Created on: Oct 9, 2021
 *      Author: WIN 10
 */

#include "STD_TYPES.h"
#include "Segment.h"
#include "DIO_Config.h"
#include "DIO.h"
#include <util/delay.h>

void main (void) {
	DIO_Int();
	u8 Count = 0;
    DIO_SetPinValue (DIO_PortA , PIN0 , PullUp);
    DIO_SetPinValue (DIO_PortA , PIN1 , PullUp);
	while (1)
	{
		if (DIO_GetPinValue (DIO_PortA, PIN0) == 0)
		{
			Count=Count+1;
			Segment (Count) ;
			_delay_ms(100);
		}
		else if ( DIO_GetPinValue (DIO_PortA, PIN1) == 0)
		{
			Count=Count-1;
			Segment (Count) ;
			_delay_ms(100);
		}


		if (Count==0 ) {
			//nothing
		}
		else if (Count==9 ) {
					//nothing
				}

	}
}
