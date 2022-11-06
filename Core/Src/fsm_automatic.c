/*
 * fsm_automatic.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */
#include "fsm_automatic.h"
#include "button.h"
#include "global.h"
#include "main.h"


void fsm_simple_buttons_run(){
	switch(status){
	case INIT:
		counter = 0;
		status = RESTART;
		setTimer(100);
	case RESTART:
		if(RESET_Pressed() == 1){
			status = RESTART;
		}
		else if(INC_Pressed() == 1){
			status = INC1;
		}
		else if(DEC_Pressed() == 1){
			status = DEC1;
		}
		setTimer(100);
		break;

	case INC1:
		if(RESET_Pressed() == 1){
			status = RESTART;
		}
		if(INC_Pressed() == 1) {
			status = INC1;
		}
		counter ++;
		setTimer(100);
		break;
	case DEC1:
		if(DEC_Pressed() == 1){
			status = DEC1;
		}
		else if(INC_Pressed() == 1){
			status = INC1;
		}
		 if(RESET_Pressed() == 1){
			status = RESTART;
		}
		setTimer(100);
		break;
	default:
		break;
	}
}
