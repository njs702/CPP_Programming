#include <stdio.h>

class Base {
private:
	char* B_buf;
public:
	Base() {
		B_buf = new char[10];
		puts("Base ����");
	}
	~Base() {
		delete[] B_buf;
		puts("Base �ı�");
	}
};

class Derived :public Base {
private:
	int* D_buf;
public:
	Derived() {
		D_buf = new int[32];
		puts("Derived ����");
	}
	~Derived() {
		delete[] D_buf;
		puts("Derived �ı�");
	}
};

int main() {
	Derived d; // �ڽ� Ŭ���� �����ϸ� �ڽ�Ŭ������ �����ڿ� �ı��� ȣ�� ++ �θ� Ŭ������ �����ڿ� �ı��� ���� ȣ��ȴ�
	Base b;
}