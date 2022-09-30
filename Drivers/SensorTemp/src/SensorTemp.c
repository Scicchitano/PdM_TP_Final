/*
 * API_delay.c
 *
 *  Created on: Sep 7, 2022
 *      Author: diego
 */


#include "SensorTemp.h"
#include <stdlib.h>
#include "API_uart.h"


void SensorTemp_Init(){
	uartInit();
}


int16_t SensorTemp_Read(){
	uint8_t msg[10];
	uint8_t Temp = 0;
	uartReceiveStringSize((uint8_t *) msg, 12);
	Temp = (uint8_t) msg[0];
	uartSendString((uint8_t *) msg);
	return Temp;
//	return rand() % 61 - 10;
}

