#include <iostream>

int main(void)
{
	int a;
	int b;
	int c;

	int prize = 0;

	std::cin >> a >> b >> c;

	
	if (a == b)
	{
		if (b == c)
		{
			prize = 10000 + a * 1000;
			
		}
		else if (b != c)
		{
			prize = 1000 + a * 100;
			
		}
	}
	else if (b == c)
	{
		if (c == a)
		{
			prize = 10000 + b * 1000;
			
		}
		else if (c != a)
		{
			prize = 1000 + b * 100;
			
		}
	}
	else if (c == a)
	{
		if (a == b)
		{
			prize = 10000 + c * 1000;
			
		}
		else if (a != b)
		{
			prize = 1000 + c * 100;
			
		}
	}
	else
	{
		if (a > b)
		{
			if (a > c)
			{
				prize = a * 100;
				
			}
		}
		else if (b > c) {
			if (b > a) {
				prize = b * 100;
				
			}
		}
		else if (c > a) {
			if (c > b)
			{
				prize = c * 100;
				
			}
		}
	}

	std::cout << prize << std::endl;
	return 0;
}