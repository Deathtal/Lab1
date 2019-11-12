#include <stdio.h>

int main() {
	char name[20];
	int age;
	char gender;
	int married;
	char address[20];
	int height;

	printf_s("Please enter your name: ");
	scanf_s("%19s", name, sizeof name);

	printf_s("Please enter your age: ");
	scanf_s("%d", &age);

	printf_s("Please enter your gender (m/f/O): ");
	scanf_s(" %c", &gender, 1);

	char married_c;
	printf_s("Are you married? (y/N): ");
	scanf_s(" %c", &married_c, 1);
	married = !(married_c == 'n' || married_c == 'N');

	printf_s("Please enter your address: ");
	scanf_s("%19s", address, sizeof address);

	printf_s("Please enter your height in milimeters: ");
	scanf_s("%d", &height);


	printf_s("Name: %s\n", name);
	printf_s("Age: %d\n", age);
	printf_s("Gender: %c\n", gender);
	printf_s("Married: %s\n", (married ? "True" : "False"));
	printf_s("Address: %s\n", address);
	printf_s("Height: %d\n", height);
}