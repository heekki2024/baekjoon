#include <iostream>


int main(void)
{
	int a;
	int b;

	int d1;
	int d2;
	int d3;

	int a3;
	int a4;
	int a5;
	int a6;

	std::cin >> a;
	std::cin >> b;

	d1 = b % 10;

	a3 = a * d1;

	d2 = (b % 100) / 10;

	a4 = a * d2 * 10;

	d3 = b / 100;

	a5 = a * d3 * 100;

	a6 = a3 + a4 + a5;

	std::cout << a3 << std::endl;
	std::cout << a4 / 10 << std::endl;
	std::cout << a5 / 100 << std::endl;
	std::cout << a6 << std::endl;
																																																													

	return 0;

}