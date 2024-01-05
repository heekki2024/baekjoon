#include <iostream>

int main(void)
{
	std::ios::sync_with_stdio(false);

	std::cin.tie(NULL);

	int a;
	int b;

	int T;
	std::cin >> T;

	for (int i = 0; i < T; i++)
	{
		std::cin >> a;
		std::cin >> b;

		std::cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << "\n";
	}
	return 0;
}