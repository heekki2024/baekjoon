#include <iostream>
#include <limits.h>


int main(void)
{
	int numbers[9];

	int theI = 0;

	for (int i = 0; i < 9; i++)
	{
		std::cin >> numbers[i];
	}

	int max_num = INT_MIN;

	for (int i = 0; i < 9; i++)
	{
		if (numbers[i] > max_num) {
			max_num = numbers[i];
			theI = i;
			
		}
	}


	std::cout << max_num << " " << theI + 1 << std::endl;
	return 0;

}