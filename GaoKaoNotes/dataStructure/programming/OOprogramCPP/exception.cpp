// 幾乎所有的程序語言(python, java, c#........)都有自己的try和catch機制, 當然也有自己的exception
#include <iostream>
#include <exception>    
#include <stdexcept>
using namespace std;

/*  基本架構
void basicForm() {
	try {
		// do something
		throw something;
	}
	catch() {  // catch 可以帶參也可不代餐
		// handle error
	}
}
*/

// catch帶參數
void testFunct() {
	try {
		int age = 15;
		if (age >= 18) {
			cout << "Access granted -- you are old enough.";
		} else {
			throw 505;  // throw出來的結果會傳送到catch作為catch的參數
		}
	}
	catch (int myNum) {
		cout << "Access denied - You must be at least 18 years old.\n";
		cout << "Error number: " << myNum;
	}
}

// catch 沒帶參數, 通常發生在妳不知道throw出來的結果的"type"是甚麼.
void testFunct2() {
	try {
		int age = 15;
		if (age >= 18) {
			cout << "Access granted -- you are old enough.";
		} else {
			throw 505;  // throw出來的結果會傳送到catch作為catch的參數
		}
	}
	catch (...) {   // 使用"..."表示沒有帶參數
		cout << "Access denied - You must be at least 18 years old.\n";
	}
}

int main() {
	testFunct();
	testFunct2();
}
