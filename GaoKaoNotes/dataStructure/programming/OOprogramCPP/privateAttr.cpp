#include <iostream>

class MyClass {
private:
    int privateMember;

public:
    // Constructor
    MyClass(int value) : privateMember(value) {}

    // Getter method for privateMember
    int getPrivateMember() {
        return privateMember;
    }

    // Public method to access privateMember
    void printPrivateMember() {
        std::cout << "Private Member: " << privateMember << std::endl;
    }
};

int main() {
    MyClass obj(42);

    // 正確：使用公共方法來訪問 privateMember
    obj.printPrivateMember();

    // 編譯錯誤：無法直接訪問 privateMember
    // std::cout << "Private Member: " << obj.privateMember << std::endl;

    return 0;
}
