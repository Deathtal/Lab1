#include <iostream>
#define loop_type 1

int main() {
	int n;
	std::cout << "Enter a natural value: ";
	std::cin >> n;

#if loop_type == 1
	for (int i = 0; i < n; i++) {
		std::cout << "Hello, World!" << std::endl;
	}

#elif loop_type == 2
	while (n > 0) {
		std::cout << "Hello, World!" << std::endl;
		n--;
	}

#elif loop_type == 3
	do {
		std::cout << "Hello, World!" << std::endl;
		n--;
	} while (n > 0);


#endif
	std::cin.get();
	std::cin.get();
}