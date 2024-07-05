/* 
reference:
https://www.programiz.com/cpp-programming/vectors
*/
#include <iostream>
#include <vector>


int main() {
	// basic way of declaration
	std::vector<int> vec; 
	// basic way to add element in a vector
	vec.push_back(1); 
	vec.push_back(2);

	std::cout << vec[1] << std::endl;

	// test in 2024.06.18
	// basic way initialization
	std::vector<int> vec2 = {1, 2, 3, 4, 5}; 
	std::cout << vec2[2] << std::endl;
	// method 2 of initilization
	std::vector<int> vec3 = {2, 3, 4, 5, 6};
	std::cout << vec3[2] << std::endl;
	// method 3 of iniiltization
	std::vector<int> vec4 {3, 4, 5, 6, 7};
	std::cout << vec4[2] << std::endl;

	// another way to show the vector rather than []
	// this way is preferred over [] because at() throws an exception whenever the vector is out of bound, while [] gives a garbage value.
	std::cout << vec2.at(2) <<std::endl;

	// delete element from a vector
	vec2.pop_back()  // remove the last element
	
}
