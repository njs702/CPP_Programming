#include "time.h"
#include <stdio.h>

void Time::SetTime(int h, int m, int s) {
	hour = h;
	min = m;
	sec = s;
}

void Time::OutTime() {
	printf("���� �ð��� %d:%d:%d �Դϴ�.\n", hour, min, sec);
}