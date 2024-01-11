#include <iostream>
#include <vector>

int main(void)
{

	//desktop에서 작성
	int n = 0;
	int m = 0;

	int i = 0;
	int j = 0;

	int temp = 0;

	std::cin >> n;
	std::cin >> m;

	std::vector<int> v(n);

	for (int l = 0; l < n; l++)
	{
		v[l] = l + 1;
	}


	for (int k = 0; k < m; k++) {
		std::cin >> i >> j;
		temp = v[i - 1];
		v[i - 1] = v[j - 1];
		v[j - 1] = temp;
	}

	for (int p = 0; p < n; p++) {
		std::cout << v[p] << std::endl;
	}

	return 0;



	//노트북에서 작성
}