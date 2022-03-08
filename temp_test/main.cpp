#include <iostream>
using namespace std;

template <typename T1, typename T2>
class _template {
private:
	T1 val1;
	T2 val2;
public:
	_template(T1 aVal1, T2 aVal2) {
		val1 = aVal1;
		val2 = aVal2;
		cout << "기본 template 생성 완료" << endl;
	}
};

template <typename T1>
class _template<T1, double> {
private:
	T1 val1;
	double val2;
public:
	_template(T1 aVal1, double aVal2) {
		val1 = aVal1;
		val2 = aVal2;
		cout << "부분 전문화 template 생성 완료" << endl;
		cout << "템플릿 타입 : <typename T1, double> " << endl;
	}
};

template <typename T>
class _template<T, string> {
private:
	T val1;
	string val2;
public:
	_template(T aVal1, string aVal2) : val1(aVal1), val2(aVal2) {}
	void OutInfo() {
		cout << "val1 값 : " << val1 << endl;
		cout << "val2 값 : " << val2 << endl;
	}
};

int main() {
	_template<int, int> basic_temp(10, 20);
	_template<int, double> partial1_temp1(15, 25.5);
	_template<float, string> partial_temp2(5.5, "부분 전문화");
	partial_temp2.OutInfo();
}