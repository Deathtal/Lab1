#include <stdio.h>

void inline halfPyramid(const char from, const char to) {
	for (int i = from; i <= to; i++) {
		for (int ii = 0; ii <= i - from; ii++) {
			printf_s("%c ", i);
		}
		printf_s("\n");
	}
}

int main() {
	char input[2];

	printf_s("Please enter a single number or letter: ");
	scanf_s("%1s", input, sizeof input);

	if (input[0] >= 97 && input[0] <= 122) {
		halfPyramid(97, input[0]);
	}
	else if (input[0] >= 65 && input[0] <= 90) {
		halfPyramid(65, input[0]);
	}
	else if (input[0] >= 49 && input[0] <= 57) {
		halfPyramid(49, input[0]);
	}
	else {
		printf_s("ERROR: invalid input");
	}
}