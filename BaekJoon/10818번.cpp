#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int N;
	std::cin >> N;

	std::vector<int> numbers(N);
	
	for (int i = 0; i < N; i++) {
		std::cin >> numbers[i];
	}

	int min_num = *std::min_element(numbers.begin(), numbers.end());
	int max_num = *std::max_element(numbers.begin(), numbers.end());

	std::cout << min_num << " " << max_num << std::endl;
	
	return 0;

}