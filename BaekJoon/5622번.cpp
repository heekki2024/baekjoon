#include <iostream>
#include <string>

int main(void)
{
	std::string str;
	std::cin >> str;

	int size = str.length();
	int count = 0;
	

	for (int i = 0; i < size; i++)
	{
			switch (str[i])
			{
			case 'A':
			case 'B':
			case 'C':
				count = count + 3;
				break;
			case 'D':
			case 'E':
			case 'F':
				count = count + 4;
				break;
			case 'G':
			case 'H':
			case 'I':
				count = count + 5;
				break;
			case 'J':
			case 'K':
			case 'L':
				count = count + 6;
				break;
			case 'M':
			case 'N':
			case 'O':
				count = count + 7;
				break;
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
				count = count + 8;
				break;
			case 'T':
			case 'U':
			case 'V':
				count = count + 9;
				break;
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				count = count + 10;
				break;
			default:
				break;
			}
	}

	std::cout << count;

}




