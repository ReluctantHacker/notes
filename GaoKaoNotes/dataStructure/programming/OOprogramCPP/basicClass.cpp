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
	return 0;
}
