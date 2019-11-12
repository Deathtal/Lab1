#include <iostream>

void inputHandle(int& n) {
	std::cout << "Please enter a positive integer: ";
	try {
		std::cin >> n;
		if (n < 0) {
			throw "ERROR: input is not a positive number";
		}
		else if (!std::cin) {
			throw "ERROR: input is not a valid number";
		}
	}
	catch (const char* msg) {
		std::cout << msg << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		n = -1;
	}
}

int main() {
	int n;

	do {
		inputHandle(n);
	} while (n < 0);

	for (int i = -n; i <= n; i++) {
		std::cout << abs(i) << std::endl;
	}
}