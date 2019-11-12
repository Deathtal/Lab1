#include <stdio.h>

void halfPyramidTypeOne(const char& from, const char& to) {
	for (int i = from; i <= to; i++) {
		for (int ii = 0; ii <= i - from; ii++) {
			printf_s("%c ", i);
		}
		printf_s("\n");
	}
}

void halfPyramidTypeTwo(const char& from, const char& to) {
	for (int i = from; i <= to; i++) {
		for (int ii = 0; ii <= i - from; ii++) {
			printf_s("%c ", from + ii);
		}
		printf_s("\n");
	}
}


int main() {
	char input;

	printf_s("Please enter a single number or letter: ");
	scanf_s(" %c", &input, 1);

	if (input >= 97 && input <= 122) {
		halfPyramidTypeOne(97, input);
	}
	else if (input >= 65 && input <= 90) {
		halfPyramidTypeOne(65, input);
	}
	else if (input >= 49 && input <= 57) {
		halfPyramidTypeTwo(49, input);
	}
	else {
		printf_s("ERROR: invalid input");
	}
}