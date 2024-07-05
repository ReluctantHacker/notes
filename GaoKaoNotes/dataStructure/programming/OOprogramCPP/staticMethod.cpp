#include <iostream>

class MyClass {
	public:
		int a = 10;
		int b = 20;
		void testFunct() {
			std::cout << "normal Hello" << std::endl;
			std::cout<< a << std::endl;
		}

		static void testStaticFunct() {
			std::cout << "static Hello" << std::endl;
			// error! you can't use class variable a here 
			// std::cout << a << std::endl; 
		}

		static void testCallPrivateFunct() { // call testStaticFunct2()
			testStaticFunct2();
		}
	private:  // --> 這是可以成立的, 當然妳無法直接呼叫就是了, 需要用到encapsulate的概念
		static void testStaticFunct2() {
			std::cout << "static hello in private?" << std::endl;
		}
};


int main() {
	// 一般function使用".", 與其他語言差不多
	MyClass testObj;
	testObj.testFunct();
	testObj.testStaticFunct(); // it works but kinda unreadable so not recommended

	// 靜態function使用"::"
	MyClass::testStaticFunct();  // recommended method to  implement static function in this way.
	MyClass::testCallPrivateFunct();
	return 0;
}
