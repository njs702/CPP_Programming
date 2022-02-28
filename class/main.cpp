#include <stdio.h>


class human {

private:
	int age;
	int height;

public:
	human(int age, int height);
	void intro();
};

human::human(int age, int height) {
	this->age = age;
	this->height = height;
}
void human::intro() {
	printf("³ªÀÌ : %d, Å° : %d\n", age, height);
}


int main() {
	//human no = human(20,170);
	human no = { 20,170 };
	no.intro();
}