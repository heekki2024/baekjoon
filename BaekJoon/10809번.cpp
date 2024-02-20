#include <iostream>
#include <string>

int main(void)
{
	std::string str;
	std::cin >> str;

	size_t len = str.length();
	for (int i = 97; i < 123; i++)
	{
		bool skipOuterLoop = false;
		for (int j = 0; j < len; j++)
		{
			if (i == str[j])
			{
				std::cout << j;
				std::cout << " ";

				skipOuterLoop = true;
				break;;

			}
		}

		if (skipOuterLoop == true)
		{
			continue;
		}
		std::cout << "-1";
		std::cout << " ";
	}

	return 0;

}