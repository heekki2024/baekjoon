#include <iostream>

int main(void)
{
	std::ios::sync_with_stdio(false);

	std::cin.tie(NULL);

	int T;
	std::cin >> T;
	int a;
	int b;

	for (int i = 0; i < T; i++)
	{
		std::cin >> a;
		std::cin >> b;

		std::cout << a + b << "\n";

//		std::cout << a + b << std::endl;
	}
	return 0;

}