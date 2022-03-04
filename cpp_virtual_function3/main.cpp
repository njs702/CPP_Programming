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
		puts("�ȳȳ�");
	}

	virtual void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age);
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
		printf("%d�й� %s�Դϴ�.\n", stunum, name);
	}
};

int main() {
	Human h("����", 10);
	Student s("���л�", 15, 123456);
	Human* pH;
	pH = &h;
	pH->intro();
	pH->eat();
	pH = &s;
	pH->intro();
	pH->eat(); // �ȳȳ�?
}