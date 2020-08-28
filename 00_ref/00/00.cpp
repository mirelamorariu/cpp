
#include <iostream>

using namespace std;

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {

	int a{ 100 }, b{ 200 };	//C++ 11 -> a = 100 -> {} uniform initializer
	cout << &a << ":" << a << endl;
	swap(a, b);
	cout << &a << ":" << a << endl;
	return 0;
}