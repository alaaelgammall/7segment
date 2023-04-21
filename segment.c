/*
 * segment.c
 *
 *  Created on: Nov 13, 2021
 *      Author: WIN 10
 */



#include "STD_TYPES.h"
#include "Segment.h"
#include "DIO_Config.h"
#include "DIO.h"

u8 arr[10] = {0b00111111,   /* 0 */
		                       0b00000110,   /* 1 */
		                       0b01011011,   /* 2 */
		                       0b01001111,   /* 3 */
		                       0b01100110,   /* 4 */
		                       0b01101101,   /* 5 */
		                       0b01111101,   /* 6 */
		                       0b00000111,   /* 7 */
		                       0b01111111,   /* 8 */
		                       0b01101111    /* 9 */
							  };


void Segment (u8 Value) {

	switch (Value) {
	case 0 :
		SegmentPORT = arr[0] ;
		break ;
	case 1 :
	    SegmentPORT = arr[1] ;
	    break ;
	case 2 :
		SegmentPORT = arr[2] ;
		break ;
	case 3 :
		SegmentPORT = arr[3] ;
		break ;
	case 4 :
		SegmentPORT = arr[4] ;
		break ;
	case 5 :
		SegmentPORT = arr[5] ;
		break ;
	case 6 :
		SegmentPORT = arr[6] ;
		break ;
	case 7 :
		SegmentPORT = arr[7] ;
		break ;
	case 8 :
		SegmentPORT = arr[8] ;
		break ;
	case 9 :
		SegmentPORT = arr[9] ;
		break ;
	}
}

