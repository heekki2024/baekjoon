#include <iostream>

int main(void)
{
	int a;

	int b;

	std::cin >> a;

	b = a / 4;

	for (int i = 0; i < b; i++)
	{
		std::cout << "long ";
	}

	std::cout << "int" << std::endl;
	return 0;

}