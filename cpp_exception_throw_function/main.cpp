#include <stdio.h>

void divide(int a, int b) {
	if (b == 0) throw "0���δ� ���� �� �����ϴ�.";
	printf("������ ��� = %d �Դϴ�\n", a / b);
}

int main() {
	try {
		divide(10, 0);
	}
	catch(const char* message) {
		puts(message);
	}
	divide(10, 5);
}