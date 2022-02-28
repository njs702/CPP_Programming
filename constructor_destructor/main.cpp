#include <stdio.h>
#include <string.h>

class Human {
private:
	char* pname;
	int age;
public:
	Human(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1];
		strcpy_s(pname, strlen(aname) + 1, aname);
		age = aage;
		printf("%s�� �����ڰ� ȣ��Ǿ����ϴ�.\n", pname);
	}
	~Human() {
		printf("%s�� �����ڰ� �ı��Ǿ����ϴ�.\n", pname);
		delete[] pname;
	}
	void intro() {
		printf("�̸� : %s, ���� : %d\n", pname, age);
	}
};

int main() {
	Human boy("���̹ڳ뾾", 20);
	boy.intro();
}