#include <stdio.h>
#include <iostream>
using namespace std;

template <typename T,int N>
class Array {
private:
	T ar[N];
public:
	void SetAt(int n, T v) {
		if (n < N && n >= 0) {
			ar[n] = v;
		}
	}
	T GetAt(int n) {
		return (n < N && n >= 0 ? ar[n] : 0);
	}
};

int main() {
	Array<int, 5> ari;
	ari.SetAt(1, 1234); //print 1234
	ari.SetAt(2, 'c'); //print 99 (int로 명시적 선언 해줬기 때문)
	cout << ari.GetAt(1) << endl;
	cout << ari.GetAt(2) << endl;
}