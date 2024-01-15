#include <iostream>
#include <string>

int main()
{
	int i;
	std::string line;
	std::getline(std::cin, line);
	std::cin >> i;
	std::cout << line[i - 1];
	
	return 0;
}