#include <iostream>
#include <string>
#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;

	int a1;
	int a2;
	int a3;
	int a4;

	
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	a1 = (a + b) % c;
	a2 = ((a % c) + (b % c)) % c;
	a3 = (a * b) % c;
	a4 = ((a % c) * (b % c))%c;
	std::cout << a1 << std::endl;
	std::cout << a2 << std::endl;
	std::cout << a3 << std::endl;
	std::cout << a4 << std::endl;


	return 0;

}