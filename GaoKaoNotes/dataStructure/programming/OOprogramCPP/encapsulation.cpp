// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
// 概念本身不難, 在java和c#裡面也有幾乎一樣的蓋念

#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}
