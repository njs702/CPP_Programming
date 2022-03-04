#include <stdio.h>

template <typename T>
void swap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T _max(const T& a, const T& b) {
	return a > b ? a : b;
}

template <typename T>
T cast(const T& a) {
	return (T)a;
}

int main() {
	int a = _max(1, 2);
	double b = _max(1.1, 2.2);
	double c = _max<double>(a, b);
	unsigned u = cast<unsigned>(1234);
	double d = cast<double>(5678);

	printf("c = %f\n", double(c));
	printf("u = %d, d = %f\n", u, d);

}