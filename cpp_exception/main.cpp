#include <stdio.h>

int main() {
	int a, b;
	try {
		printf("�������� �� �Է� :");
		scanf_s("%d", &a);
		if (a < 0)
			throw a;
		printf("������ �� �Է� :");
		scanf_s("%d", &b);
		if (b == 0)
			throw "0���δ� ���� �� �����ϴ�";
	}
	catch (int a) {
		printf("%d�� �����̹Ƿ� ������ �ź�\n", a);
	}
	catch (const char* message) {
		puts(message);
	}
}