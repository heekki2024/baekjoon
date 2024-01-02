#include <iostream>
#include <string>

int main(void)
{
	std::string exitStr;

	std::cout << "닉네임 입력 : ";
	std::cin >> exitStr;
	exitStr += "??!";
	std::cout << exitStr << std::endl;

	return 0;
}