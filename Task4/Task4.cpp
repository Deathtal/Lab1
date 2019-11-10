#include <iostream>
#include <sstream>

class Person {
private:
	std::string name;
	int age;
	char gender;
	bool married;
	std::string address;
	int height;

public:
	Person() : name("Unknown"), age(0), gender(false), married(0), address("Unknow"), height(0) {

	}

	const void askName() {
		std::cout << "Please enter your name: ";
		std::getline(std::cin, name);
	}

	const void askAge() {
		std::cout << "Please enter your age: ";
		std::cin >> age;
	}

	const void askGender() {
		std::cout << "What is your gender? (M/F/O): ";
		std::cin >> gender;
	}

	const void askMarried() {
		std::cout << "Are you married? (true/false): ";
		std::string mrg_str;
		std::cin >> mrg_str;
		if (mrg_str == "true") {
			married = true;
		}
		else {
			married = false;
		}
	}

	const void askAddress() {
		std::cout << "Please enter your address: ";
		std::cin.ignore(); //std::cin leaves a \n behind. So that it does not interfere with std::getline this line of text is needed
		std::getline(std::cin, address);
	}

	const void askHeight() {
		std::cout << "Please enter your height in milimeters: ";
		std::cin >> height;
	}

	const std::string& GetName() const { return name; }
	const int& GetAge() const { return age; }
	const char& GetGender() const { return gender; }
	const bool& GetMarried() const { return married; }
	const std::string& GetAddress() const { return address; }
	const int& GetHeight() const { return height; }
};

int main() {
	Person person1;

	person1.askName();
	person1.askAge();
	person1.askGender();
	person1.askMarried();
	person1.askAddress();
	person1.askHeight();

	std::cout << "Name: " << person1.GetName() << std::endl;
	std::cout << "Age: " << person1.GetAge() << std::endl;
	std::cout << "Gender: " << person1.GetGender() << std::endl;
	std::cout << "Married: " << person1.GetMarried() << std::endl;
	std::cout << "Address: " << person1.GetAddress() << std::endl;
	std::cout << "Height: " << person1.GetHeight() << "mm" << std::endl;
}