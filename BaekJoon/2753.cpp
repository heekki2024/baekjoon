#include <iostream>

int main(void)
{
	int a;
	

	bool mul4 = false;
	bool mul100 = false;
	bool mul400 = false;

	std::cin >> a;


	//2012
	//true
	//false
	//false
	if (a % 4 == 0)
	{
		mul4 = true;
	}
	if (a % 100 == 0)
	{
		mul100 = true;
	}
	if (a % 400 == 0)
	{
		mul400 = true;
	}

	if (mul100 == true && mul400 == false)
	{
		std::cout << "0" << std::endl;
	}
	else if (mul4 == true)
	{
		std::cout << "1" << std::endl;
	}
	else
	{ 
		std::cout << "0" << std::endl;
	}


	return 0;
}