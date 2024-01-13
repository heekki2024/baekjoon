#include <iostream>
#include <vector>

int main(void)
{
	int n;
	int m;

	std::cin >> n;
	std::cin >> m;

	std::vector<int> v(n);


	for (int i = 0; i < m; i++)
	{
		v[0] = i + 1;
	}


	for (int i = 0; i < m; i++)
	{
		int a;
		int b;
		std::cin >> a;
		std::cin >> b;
		std::vector<int> temp(n);

		for (a - 1; a - 1 < b; a++)
		{

			v[a - 1] = temp[a - 1];
		}

		for (b - 1; b - 1 >= a - 1; b--)
		{
			v[b - 1] = temp[a - 1];
		}

	}

}