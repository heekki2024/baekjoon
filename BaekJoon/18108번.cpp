#include <iostream>

int main(void)
{
	int thaiYear;
	int globYear;

	std::cin >> thaiYear;
	
	globYear = thaiYear - 543;

	std::cout << globYear;

	return 0;
}