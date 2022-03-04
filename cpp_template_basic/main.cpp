#include <stdio.h>

template <typename T>
void swap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 3, b = 4;
	double c = 2.15, d = 3.14;
	char e = 'b', f = 'c';
	swap(a, b);
	swap(c, d);
	swap(e, f);
	printf("a = %d, b = %d\n", a, b);
	printf("c = %f, d = %f\n", c, d);
	printf("e = %c, f = %c\n", e, f);

}