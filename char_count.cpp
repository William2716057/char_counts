#include <iostream>
#include <string>

int main() {
	std::string text;

	std::cout << "Enter text: ";
	std::getline(std::cin, text);//for user input

	std::cout << "Total characters in string: " << text.length() << std::endl;
	return 0;
}
