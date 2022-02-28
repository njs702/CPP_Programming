#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void ref1() {
	int i = 3;
	int& ri = i;

	ri++;

	printf("ri = %d, i = %d\n", ri, i);

	i--;
	printf("ri = %d, i = %d\n", ri, i);
}

void ref2(int& ra) {
	ra += 1;
}

void ref3(char*& name) {
	name = (char*)malloc(32);
	strcpy(name, "Junseok");
}