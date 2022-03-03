#include <stdio.h>
#include <string.h>

class Human {
protected:
	char name[12];
	int age;
public:
	Human(const char* aname, int aage) {
		strcpy_s(name,12, aname);
		age = aage;
	}
	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
	void study() {
		printf("사람 공부중입니다.\n");
	}
};

class Student :public Human {
protected:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}
	void intro() {
		printf("%d학번 %s입니다.\n", stunum, name);
	}
	void study() {
		printf("학생 공부중입니다\n");
	}
};

int main() {
	Human h("김사람", 10);
	Student s("김학생", 10, 123456);
	Human* pH;
	Student* pS;

	pH = &h;
	pH->intro();
	pS = &s;
	pS->intro();
	pH = &s;
	pH->intro();
	pS = (Student*)&h;
	pS->intro();
	pS->study();
}