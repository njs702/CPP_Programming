#include <stdio.h>

class Shape {
public:
	virtual void draw() {
		puts("���� ������Ʈ�Դϴ�.\n");
	}
};

class Line :public Shape {
public:
	void draw() override {
		puts("���� �߽��ϴ�.\n");
	}
};

class Circle :public Shape {
public:
	void draw() override {
		puts("���� �׸��ϴ�.\n");
	}
};

class Rect :public Shape {
public:
	void draw() override {
		puts("�簢���� �׸��ϴ�.\n");
	}
};

int main() {
	Shape* ar[] = { new Shape(),new Line(),new Circle(),new Rect() };
	for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++) {
		ar[i]->draw();
	}
	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
		delete ar[i];
	}
}