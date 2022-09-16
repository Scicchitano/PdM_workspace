/*
 * API_delay.c
 *
 *  Created on: Sep 7, 2022
 *      Author: diego
 */


#include "SensorTemp.h"
#include <stdlib.h>


void SensorTemp_Init(){

}


int16_t SensorTemp_Read(){
	return rand() % 61 - 10;
}

