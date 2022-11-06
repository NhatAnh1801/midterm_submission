/*
 * blinkLED.c
 *
 *  Created on: Nov 6, 2022
 *      Author: ADMIN
 */
#include "blinkLED.h"
#include "global.h"
#include "main.h"

void blinkLED(){
	 if(timer1_flag ==1){
		  setTimer(100);
		  //TODO
		  HAL_GPIO_TogglePin(LED_RED_GPIO_Port,LED_RED_Pin);
	 }
}
