#include <stdio.h>
#include <stdlib.h>

int main() {
	char name[20];
	int age;
	char gender[2];
	int married;
	char address[20];
	int height;


	printf_s("Please enter your name: ");
	scanf_s("%19s", name, (unsigned)_countof(name));

	printf_s("Please enter your age: ");
	scanf_s("%d", &age);

	printf_s("Please enter your gender (M/F/O): ");
	scanf_s("%1s", gender, (unsigned)_countof(gender));

	char married_c[6];
	printf_s("Are you married? (true/false): ");
	scanf_s("%5s", married_c, (unsigned)_countof(married_c));
	if (married_c == "true") {
		married = 1;
	}
	else {
		married = 0;
	}

	printf_s("Please enter your address: ");
	scanf_s("%19s", address, (unsigned)_countof(address));

	printf_s("Please enter your height in milimeters: ");
	scanf_s("%d", &height);


	printf_s("Name: %s\n", name);
	printf_s("Age: %d\n", age);
	printf_s("Gender: %s\n", gender);
	printf_s("Married: %d\n", married);
	printf_s("Address: %s\n", address);
	printf_s("Height: %d\n", height);
}