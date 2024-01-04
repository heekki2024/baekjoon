#include <iostream>

int main(void)
{
	int x = 0;

	int x1 = 0;
	int n = 0;
	int a = 0;
	int b = 0;

	std::cin >> x;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a;
		std::cin >> b;

		x1 = x1 + a * b;
	}

	if (x == x1)
	{
		std::cout << "Yes" << std::endl;
	}
	else if (x != x1)
	{
		std::cout << "No" << std::endl;
	}


	return 0;


}