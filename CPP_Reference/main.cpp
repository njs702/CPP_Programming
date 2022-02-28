#include <stdio.h>
#include <malloc.h>
#include "reference.h"

int main() {
	// ref1();

	/*int a = 5;
	ref2(a);
	printf("a 값 : %d\n", a);*/

	char* name;
	ref3(name);
	printf("이름은 %s 입니다.\n", name);
	free(name);
}