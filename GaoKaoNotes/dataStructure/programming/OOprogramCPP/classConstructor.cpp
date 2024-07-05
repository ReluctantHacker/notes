#include <iostream>
using namespace std;

// basic rule
class testClass {
	public:
	       int x;	
	       int y;
	       int z;

	// constructor
	testClass() {
		x = 0;
		cout << "Default constructor called" << endl;
	}
};

// 帶參數
class testClass2 {
	public:
		int x;
		int y;
		int z;
	
	// constructor
	testClass2(int a) {
		x = a;
		cout << "Default constructor called" << endl;
	}
};

// 帶參數法2
// testClass3 and testClass2 are exactly doing the same thing!!!
class testClass3 {
	public:
		int x;
		int y;
		int z;

	// constructor, 使用初始化列表的构造函数, 這招與testClass2的constructor目的是一樣的
	testClass3(int a) : x(a) {
		cout << "Default constructor called" << endl;
	}
};


// 同時兩constructor, 一個帶參, 一個不代餐, 可以這樣做, 感覺有點類似overloading的概念
class testClass4 {
	public: 
		int x;
		int y;
		int z;
	testClass4() {
		cout << "Default constructor called" << endl;
	}
	testClass4(int a) {
		x = a;
		cout << "Default constructor called" << endl;
	}
};


// 拷貝型的constructor, 其實就是在建立object把其他同class的object的參數狀況拷貝過來的概念
class MyClass {
	private:
	    char* str;
	public:
	    // 默认构造函数
	    MyClass(const char* s) {
		str = new char[strlen(s) + 1];
		strcpy(str, s);
		std::cout << "Constructor called" << std::endl;
	    }

	    // 拷贝构造函数
	    MyClass(const MyClass &obj) {
		str = new char[strlen(obj.str) + 1];
		strcpy(str, obj.str);
		std::cout << "Copy constructor called" << std::endl;
	    }
};


int main() {
}
