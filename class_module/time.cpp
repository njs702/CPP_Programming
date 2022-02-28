#include "time.h"
#include <stdio.h>

void Time::SetTime(int h, int m, int s) {
	hour = h;
	min = m;
	sec = s;
}

void Time::OutTime() {
	printf("현재 시간은 %d:%d:%d 입니다.\n", hour, min, sec);
}