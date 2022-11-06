/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "fsm_automatic.h"
#include "display7SEG.h"

#define INIT		0
#define RESTART		1
#define INC1		2
#define DEC1 		3

extern int status;
int counter;

#endif /* INC_GLOBAL_H_ */
