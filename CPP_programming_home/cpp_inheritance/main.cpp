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
		printf("�̸� = %s, ���� = %d\n", this->name, this->age);
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
		printf("%d�й� %s�Դϴ�.\n", stunum, name);
	}
	void study() {
		printf("�������Դϴ�.\n");
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
		printf("%s��(��) �����ϰ� ���� ����.\n", this->thesis);
	}
};

int main() {
	Graduate noh("���ؼ�", 20, 960702, "���� ��");
	noh.intro();
	noh.study();
	noh.research();
}