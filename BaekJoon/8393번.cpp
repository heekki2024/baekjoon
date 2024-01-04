#include <iostream>

int main(void)
{
	int a;

	int b = 0;

	std::cin >> a;

	for (int i = 0; i < a; i++)
	{
		b = b + (i + 1);
	}

	std::cout << b << std::endl;
	return 0;
}