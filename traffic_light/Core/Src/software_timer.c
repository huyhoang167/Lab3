/*
 * software_timer.c
 *
 *  Created on: Oct 27, 2022
 *      Author: Hoang
 */
#include"software_timer.h"
// flag cho 2 timer
int timer1_flag = 0;
int timer1_counter = 0;
int timer2_flag = 0;
int timer2_counter = 0;
int Timer_Cycle = 10;
// Set thoi gian cho timer
void setTimer1(int duration) {
	timer1_counter = duration/Timer_Cycle;
	timer1_flag = 0;
}
void setTimer2(int duration) {
	timer2_counter = duration/Timer_Cycle;
	timer2_flag = 0;
}
// Dem nguoc timer
void timerRun1() {
		timer1_counter--;
		if(timer1_counter <= 0) {
			timer1_flag = 1;
		}
}
void timerRun2(){
			timer2_counter--;
			if(timer2_counter <= 0) {
				timer2_flag = 1;
			}
}

void clearTimer1(){
	timer1_counter =0;
	timer1_flag = 0;
}


