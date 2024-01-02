#include <iostream>

int main(void)
{
	int H; //0~23
	int M; //0~59

	int offset = 45;

	std::cin >> H;
	std::cin >> M;

	if (M - offset < 0)
	{
		if (H - 1 < 0)
		{
			H = 24 + (H - 1);
			M = 60 + (M - offset);
		}
		else
		{
			H = H - 1;
			M = 60 + (M - offset);
		}
	}
	else
	{

		
		M = M - offset;
		
	}
	std::cout << H << std::endl;
	std::cout << M << std::endl;

	return 0;
}