#include <iostream>

int inputHandle() {
	float n;
	std::cout << "Please enter a positive integer: ";
	try {
		std::cin >> n;
		if (n < 0) {
			throw "ERROR: input is negative";
		}
		else if (!std::cin) {
			throw "ERROR: input is not a number";
		}
		else if ((int)n != n) {
			throw "ERROR: input is not an integer";
		}
		return n;
	}
	catch (const char* msg) {
		std::cout << msg << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		return -1;
	}
}

int main() {
	int n;

	do {
		n = inputHandle();
	} while (n < 0);

	for (int i = -n; i <= n; i++) {
		std::cout << abs(i) << std::endl;
	}
}