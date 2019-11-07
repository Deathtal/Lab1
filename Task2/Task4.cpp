#include <iostream>

const char* askFor(const char* question) {
	std::cout << "Please enter your " << question << std::endl;
	char* result;
	std::cin >> result;
	return result;
}

int main() {
	const char* Name = askFor("Name");
	std::cout << "Name: " << Name << std::endl;
	std::cin.get();
}