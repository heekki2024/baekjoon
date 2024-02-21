#include <iostream>
#include <string>

int main(void)
{
	int a;
	int b;

	std::cin >> a;
	std::cin >> b;

	std::string strA;
	std::string strB;

	std::string strFA;
	std::string strFB;
	strA = std::to_string(a);
	strB = std::to_string(b);


	for (int i = 0; i < 3; i++)
	{
		
		strFA += strA[2-i];
		
	}

	for (int i = 0; i < 3; i++)
	{

		strFB += strB[2 - i];

	}
	
	a = std::stoi(strFA);
	b = std::stoi(strFB);

	if (a > b)
	{
		std::cout << a;
	}else 
		if (a < b)
		{
			std::cout << b;
	}

	return 0;
}