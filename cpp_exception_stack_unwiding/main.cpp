#include <stdio.h>

class C {
	int a;
public:
	C() { puts("������ ȣ��"); }
	~C() { puts("�ı��� ȣ��"); }
};

void divide(int a, int b) {
	if (b == 0) throw "0���δ� ���� �� �����ϴ�";
	printf("������ ��� = %d �Դϴ�\n", a / b);
}

void calc(int t, const char* m) {
	C c;
	divide(10, 0);
}

int main() {
	try {
		calc(1, "���");
	}
	catch (const char* message) {
		puts(message);
	}
	puts("���α׷��� ����˴ϴ�.");
}