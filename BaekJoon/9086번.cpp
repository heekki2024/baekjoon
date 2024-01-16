#include <iostream>
#include <string>

int main(void)
{
	std::string input;

	int testcase;

	std::cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		int l;
		std::cin >> input;
		l = input.length();

		std::cout << input[0];
		std::cout << input[l - 1];
		std::cout << "\n";
	}

	return 0;

}