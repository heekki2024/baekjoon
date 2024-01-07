#include <iostream>

int main(void)
{
	int n;
	std::cin >> n;
	int arr[100];
	int a;
	int count=0;

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cin >> a; 

	for (int i = 0; i < n; i++)
	{

		if (a == arr[i])
		{
			count++;
		}
	}

	std::cout << count;
	return 0;

}