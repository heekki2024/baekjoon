#include <iostream>
#include <string>

int main(void)
{
	char ch;
	std::cin >> ch;
	int ascii = static_cast<int>(ch);
	std::cout << ascii;
	

	return 0;
}