#include <iostream>

int main(void)
{
	int a;
	int b;

	std::cin >> a >> b;

	while ((a + b) != 0)
	{
		std::cout << a + b << std::endl;
		std::cin >> a >> b;

	}


	return 0;
}