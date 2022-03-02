#include <stdio.h>

class Time {
	friend class Date;
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}
};

class Date {
private:
	int year, month, day;
public:
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	void OutToday(Time& t) {
		printf("오늘은 %d년 %d월 %d일이며 지금 시간은 %d:%d:%d 입니다.\n", year, month, day, t.hour, t.min, t.sec); // private 데이터에 접근하기 위해 friend class 선언 해줌
	}
};

int main() {
	Date d(2022, 03, 02);
	Time t(11, 36, 55);
	d.OutToday(t);
}