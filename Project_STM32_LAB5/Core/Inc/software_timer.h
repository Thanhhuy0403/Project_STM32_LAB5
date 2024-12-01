/*
 * software_time.h
 *
 *  Created on: Nov 25, 2024
 *      Author: phan thanh huy
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"
#define TICH 	10
extern int timer_flags[5];

void setTimers(int index, int duration);
void runTimer();

#endif /* INC_SOFTWARE_TIMER_H_ */
