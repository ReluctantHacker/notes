// "Polymorphism", 這個名詞在同樣存在於python和java, 且是一樣的概念, 其實很簡單, 就是表示B, C, D分別繼承了A, 當然也繼承了A的method, 這些method可以在B, C, D中自己實作自己的想要的, 很多時候為了架構的清楚以及一擴張性, 會把A設定成"abstract class", 及A只能宣告method, 不能定義method. 詳細可以參考C3school, 以及以下的reference:


#include <iostream>
using namespace std;

// Base class
class Animal {
	public:
		void animalSound() {
			cout << "The animal makes a sound \n";
		}
}; 

// Derived class
class Pig: public Animal {
	public:
		void animalSound() {
			cout << "The pig says: wee wee \n";
		}
};


// Derived class
class Dog: public Animal {
	public:
		void animalSoundI() {
			cout << "The dog says: bow bow \n";
		}
};

int main() {
	Animal myAnimal;
	Pig myPig;
	Dog myDog;

	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();
	return 0;
}
