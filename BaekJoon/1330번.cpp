#include <iostream>

int main(void)
{
	int a;
	int b;

	std::cin >> a;
	std::cin >> b;

	if (a > b)
	{
		std::cout << ">" << std::endl;
	}
	else if (a < b)
	{
		std::cout << "<" << std::endl;
	}
	else if (a == b)
	{
		std::cout << "==" << std::endl;
	}


	return 0;
}