#include <iostream>

int main(void)
{
	int H;
	int M;
	int time;
	int tempH;


	std::cin >> H >> M;
	std::cin >> time;

	if (M + time >= 60)
	{
		tempH = (M + time) / 60;
		if (H + tempH >= 24)
		{
			H = (H + tempH) % 24;
		}
		else
		{
			H = H + tempH;
		}

		M = (M + time) % 60;
	}
	else if (M + time < 60)
	{
		M = M + time;
	}
	std::cout << H;
	std::cout << " ";
	std::cout << M;

	return 0;
}