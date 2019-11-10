#include <iostream>

int main() {
	int n;
	int number = 2;

	std::cout << "Enter a natural number: ";
	std::cin >> n;

	while (n > 0) {
		bool isPrime = true;
		for (int i = 2; i <= number / 2; i++) {
			if (number % i == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			std::cout << number << std::endl;
			n--;
		}
		number++;
	}
}