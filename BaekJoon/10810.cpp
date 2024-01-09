#include <iostream>
#include <vector>

int main(void) 

{
	std::vector<int> v;
	int n;
	int m;

	int i, j, k;

	std::cin >> n;
	std::cin >> m;

	v.resize(n);

	for (int i = 0; i < n; i++)
	{
		v[i] = 0;
	}

	for (int x = 0; x < m; x++)
	{
		std::cin >> i;
		std::cin >> j;
		std::cin >> k;

		for (int y = i - 1; y < j ; y++)
		{
			v[y] = k;
		}

	}

	for (int x = 0; x < n; x++)
	{
		std::cout << v[x] << std::endl;

	}
	

	return 0;
}