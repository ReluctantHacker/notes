// 這招在java也差不多, 簡單來說就是同名同態的函數, 若變數不同, 則當作不同
#include <iostream>
using namespace std;

int testFunct(int a) {
	cout << a << endl;
	return 0;
}
// failed, this doesn't work, 變數名稱不一樣沒有意義, 他還是看數量以及型態
/*
int testFunct(int b) { 
	cout << b << endl; 
	return 0;
}
*/

// 只要變數型態不一樣, 即使函數同名也是為不同function
int testFunct(double c) {
	cout << c << endl;
	return 0;
}

// 返回型態不一樣, 但是變數卻一樣, 函數名相同, 不行!!!
/*
double testFunct(int d) {
	cout << d << endl;
	return 0;
}
*/


int testFunct2(int x) {
	cout << x << endl;
	return 0;
}
// 返回型態不一樣, 但是變數也不一樣, 函數名相同, 可以.   簡單來說就是只要變數不同函數名相同都視作不同.
double testFunct2(double d) {
	cout << d << endl;
	return 0;
}

// this works
int testFunct2(int a, int b) {
	// do something
	return 0;
}

// this works
int testFunct2(int a, int b, double c) {
	// do something
	return 0;
}


int main() {
	int testNum = 10;
	testFunct(testNum);
	return 0;
}
