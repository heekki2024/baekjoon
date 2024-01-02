#include <iostream>

int main(void)
{
	int x;
	int y;

	int xPos;
	int yPos;

	std::cin >> x;
	std::cin >> y;

	if (x >= -1000 && x < 0)
	{
		xPos = false;
	}
	else
	{
		xPos = true;
	}

	if (y >= -1000 && y < 0)
	{
		yPos = false;
	}
	else
	{
		yPos = true;
	}

	if (xPos == true && yPos == true)
	{
		std::cout << "1" << std::endl;
	}else if (xPos == false && yPos == true)
	{
		std::cout << "2" << std::endl;
	}
	else if (xPos == false && yPos == false)
	{
		std::cout << "3" << std::endl;
	}else if(xPos == true && yPos == false)
	{
		std::cout << "4" << std::endl;
	}else
	{
		std::cout << "error" << std::endl;
	}
	return 0;




}