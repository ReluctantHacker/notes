#include <iostream>

// normal call by value, can be used in c and c++
int testFunct1(int a) {
	a = 2;
	return 1;
}

// use the pointer, can be used in c and c++
int testFunct2(int *b) {
	*b = 3;
	return 1;
}

// call by reference, can be used only in c++
// it's kinda do the things that pointer do all directly through so you don't need to worry about complicated pointer problem, but i think pointer is not a big deal
int testFunct3(int &c) {
	c = 4;
	return 1;
}

int main() { 
	int a = 1; 
	testFunct1(a); // nothing changed
	std::cout << a << std::endl; 
	testFunct2(&a); // changed
	std::cout << a << std::endl;
	testFunct3(a); // changed
	std::cout << a << std::endl;

}
