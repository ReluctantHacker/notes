#include <iostream>
using namespace std;

class Rectangle {
	private:
		double length;
		double width;

	public:
		// constructor
		Rectangle(double l, double w) {
			length = l;
			width = w;
		}
		
		// return rectangle's area
		double area() {
			return length*width;
		}

		// return rectangle's perimeter
		double perimeter() {
			return 2*(length+width);
		}

		double getLength() {
			return length;	
		}

		double getWidth() {
			return width;
		}

		double setLengthWidth(double l, double w) {
			length = l;
			width = w;
			return 1;
		}
};

// class 本身沒有任何參數, 則使用其創建instance時不可加'()'
class testClass {
	public:
		int testVar = 1; // 妳可以直接在裡面define變數的值
		int testVar2;
};

int main() {
	Rectangle rect(5.0, 3.0); // create a Rectangle object called "rect"
	// show the rect's area
	cout << rect.area() << endl;
	// show the rect's perimeter
	cout << rect.perimeter() << endl;

	// update the length and width
	rect.setLengthWidth(7.0, 8.0);

	// show the updated rect's area
	cout << rect.area() << endl;
	// show the updated rect's perimeter
	cout << rect.perimeter() << endl;



	testClass testInstance;   // 不須加'()'
	cout << testInstance.testVar << endl;

	return 0;
}
