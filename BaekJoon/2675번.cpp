#include <iostream>
#include <string>

int main(void)
{
	int T;
	std::cin >> T;

	for (int i = 0; i < T; i++)
	{
		int R;
		std::cin >> R;

		std::string str;
		std::cin >> str;

		int len = str.length();

		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < R; j++)
			{
				std::cout << str[i];
			}
		}
		std::cout << std::endl;
	}
	return 0;
}