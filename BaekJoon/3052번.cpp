#include <iostream>
#include <vector>

int main(void)
{
	int arr[10] = {};
	int result[10] = {};
	std::vector<int> v;

	
	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
		result[i] = arr[i] % 42;

		if (v.size() != 0) {
			for (int j = 0; j < v.size(); j++)
			{
				if (v[j] == result[i]) {
					break;
				}
				else if (v[j] == result[i])
				{

				}
				if (j == v.size() - 1)
				{
					v.push_back(result[i]);
				}
			}
		}
		else if (v.size() == 0)
		{
			v.push_back(result[i]);
		}
		
	}

	std::cout << v.size();

	return 0;
}