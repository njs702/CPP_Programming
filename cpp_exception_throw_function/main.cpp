#include <stdio.h>

void divide(int a, int b) {
	if (b == 0) throw "0으로는 나눌 수 없습니다.";
	printf("나누기 결과 = %d 입니다\n", a / b);
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