#include <stdio.h>
#include <malloc.h>
#include "reference.h"

int main() {
	// ref1();

	/*int a = 5;
	ref2(a);
	printf("a �� : %d\n", a);*/

	char* name;
	ref3(name);
	printf("�̸��� %s �Դϴ�.\n", name);
	free(name);
}