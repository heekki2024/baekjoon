#include <iostream>

int main(void)
{
	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int k = N - i - 1; k > 0; k--)
		{
			std::cout << " ";
		}

		for (int j = 0; j <= i; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}