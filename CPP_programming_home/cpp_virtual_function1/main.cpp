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
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
	void study() {
		printf("��� �������Դϴ�.\n");
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
		printf("%d�й� %s�Դϴ�.\n", stunum, name);
	}
	void study() {
		printf("�л� �������Դϴ�\n");
	}
};

int main() {
	Human h("����", 10);
	Student s("���л�", 10, 123456);
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