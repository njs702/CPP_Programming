#include <stdio.h>

class Time;

class Date {
private:
	int year, month, day;
public:
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	void OutToday(Time& t);
};

class Time {
	friend void Date::OutToday(Time& t);
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}
};

void Date::OutToday(Time& t) {
	printf("������ %d�� %d�� %d���̸� ���� �ð��� %d:%d:%d �Դϴ�.\n", year, month, day, t.hour, t.min, t.sec); // private �����Ϳ� �����ϱ� ���� friend class ���� ����
}

int main() {
	Date d(2022, 03, 02);
	Time t(11, 50, 35);
	d.OutToday(t);
}