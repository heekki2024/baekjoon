#include <iostream>
#include <string>

int main(void)
{
	std::string str;

	bool firstWord = false;

	std::getline(std::cin, str);

	size_t len = str.length();
	int count = 0;

	for (int i = 0; i < len; i++)
	{
		if (str[i] != ' ' && firstWord == false)
		{
			firstWord = true;
			count++;
		}
		else if (str[i] == ' ' && firstWord == true)
		{
			firstWord = false;
		}
	}

	std::cout << count;
	return 0;
}