#include <iostream>
#include <string>

int main(void)
{
	std::string exitStr;

	std::cout << "�г��� �Է� : ";
	std::cin >> exitStr;
	exitStr += "??!";
	std::cout << exitStr << std::endl;

	return 0;
}