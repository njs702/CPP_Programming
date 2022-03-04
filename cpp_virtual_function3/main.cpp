#include <stdio.h>
#include <string.h>

class Human {
protected:
	char  name[12];
	int age;
public:
	Human(const char* aname, int aage) {
		strcpy_s(name,12, aname);
		age = aage;
	}

	void eat() {
		puts("³È³È³È");
	}

	virtual void intro() {
		printf("ÀÌ¸§ = %s, ³ªÀÌ = %d\n", name, age);
	}
};

class Student :public Human {
protected:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}

	void intro() override {
		printf("%dÇÐ¹ø %sÀÔ´Ï´Ù.\n", stunum, name);
	}
};

int main() {
	Human h("±è»ç¶÷", 10);
	Student s("ÀÌÇÐ»ý", 15, 123456);
	Human* pH;
	pH = &h;
	pH->intro();
	pH->eat();
	pH = &s;
	pH->intro();
	pH->eat(); // ³È³È³È?
}