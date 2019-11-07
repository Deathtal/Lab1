#include <iostream>

int main() {
	std::cout << "Please enter the following information:" << std::endl;
	std::cout << "Name: ";
	std::string name;
	std::cin >> name;
	std::cout << "Age: ";
	int age;
	std::cin >> age;
	std::cout << "Gender: ";
	std::string gender;
	std::cin >> gender;
	std::cout << "Address: ";
	std::string address;
	std::cin >> address;
	std::cout << "Height in milimeters: ";
	int height;
	std::cin >> height;

	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Gender: " << gender << std::endl;
	std::cout << "Address: " << address << std::endl;
	std::cout << "Height: " << height << "mm" << std::endl;
}