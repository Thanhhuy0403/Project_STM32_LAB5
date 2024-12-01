/*
 * software_time.c
 *
 *  Created on: Nov 25, 2024
 *      Author: phan thanh huy
 */

#include <software_timer.h>

int timer_flags[5];
int timerCounters[5];

void setTimers(int index, int duration){
	timerCounters[index] = duration/TICH;
	timer_flags[index] = 0;
}

void runTimer(){
	for(int i = 0; i < 5; i++){
		if(timerCounters[i] > 0){
			timerCounters[i]--;
			if(timerCounters[i] <= 0){
				timer_flags[i] = 1;
			}
		}
	}
}

