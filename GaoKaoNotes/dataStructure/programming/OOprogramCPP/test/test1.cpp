#include <iostream>

class testClass {
	public: 
		testClass(int testPara) {
			testAttr1 = testPara;
		}
		int testAttr1;
		int testAttr2;
	private:
		int testAttr3;
		int testAttr4;
};

int main() {
	testClass testInstance(1);
	std::cout << testInstance.testAttr1 << std::endl;
}
