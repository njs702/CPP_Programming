#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

class Human {
protected:
	char name[12];
	int age;
public:
	Human(const char* aname, int aage) {
		strcpy(this->name, aname);
		this->age = aage;
	}
	void intro() {
		printf("이름 = %s, 나이 = %d\n", this->name, this->age);
	}
};

class Student :public Human {
protected:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		this->stunum = astunum;
	}
	void intro() {
		printf("%d학번 %s입니다.\n", stunum, name);
	}
	void study() {
		printf("공부중입니다.\n");
	}

};

class Graduate :public Student {
protected:
	char thesis[32];
public:
	Graduate(const char* aname, int aage, int astunum, const char* athesis) :Student(aname, aage, astunum) {
		strcpy(this->thesis, athesis);
	}
	void research() {
		printf("%s를(을) 연구하고 논문을 쓴다.\n", this->thesis);
	}
};

int main() {
	Graduate noh("노준석", 20, 960702, "연구 논문");
	noh.intro();
	noh.study();
	noh.research();
}