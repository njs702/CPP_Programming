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
		printf("%s의 생성자가 호출되었습니다.\n", pname);
	}
	~Human() {
		printf("%s의 생성자가 파괴되었습니다.\n", pname);
		delete[] pname;
	}
	void intro() {
		printf("이름 : %s, 나이 : %d\n", pname, age);
	}
};

int main() {
	Human boy("김이박노씨", 20);
	boy.intro();
}