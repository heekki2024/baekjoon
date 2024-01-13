#include <iostream>

int main(void)
{
	int stu[30] = {};
	int k = 0;
	int min = 31;

	for (int i = 0; i < 28; i++)
	{
		std::cin >> k;
		k = k - 1;
		stu[k] = 1;
	}

	for (int i = 0; i < 30; i++)
	{
		if (stu[i] == 0)
		{
			std::cout << i + 1 << std::endl;
		}
	}

	return 0;
}