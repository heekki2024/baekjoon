#include <iostream>
#include <vector>

int main(void)
{
	int n;
	int m;

	std::cin >> n;
	std::cin >> m;

	std::vector<int> v(n);


	//v[0] = 1;
	//v[1] = 2;
	//v[2] = 3;
	//v[3] = 4;
	//v[4] = 5;


	for (int i = 0; i < n; i++)
	{
		v[i] = i + 1;
	}


	for (int i = 0; i < m; i++)
	{
		int a;
		int b;
		std::cin >> a; //1~4;
		 
		a = a - 2;
		std::cin >> b;
		b = b - 1;
		int tempa = a;

		std::vector<int> temp(n);

		for (int i = 0; i < n; i++)
		{
			temp[i] = v[i];
		}
		//v[3], v[2], v[1] v[0] 
		for (b; b > a; b--)
		{
			v[b] = temp[tempa + 1];
			tempa++;
		}

	}
	
	for (int i = 0; i < n; i++)
	{
		std::cout << v[i] << std::endl;
	}
	return 0;
}