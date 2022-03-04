#include <stdio.h>

class Base {
private:
	char* B_buf;
public:
	Base() {
		B_buf = new char[10];
		puts("Base 생성");
	}
	~Base() {
		delete[] B_buf;
		puts("Base 파괴");
	}
};

class Derived :public Base {
private:
	int* D_buf;
public:
	Derived() {
		D_buf = new int[32];
		puts("Derived 생성");
	}
	~Derived() {
		delete[] D_buf;
		puts("Derived 파괴");
	}
};

int main() {
	Derived d; // 자식 클래스 생성하면 자식클래스의 생성자와 파괴자 호출 ++ 부모 클래스의 생성자와 파괴자 역시 호출된다
	Base b;
}