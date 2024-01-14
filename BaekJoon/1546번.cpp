#include <iostream>
#include <vector>
#include <iomanip>


int main(void)
{
	int n;
	int max = -1;


	std::cin >> n;
	std::vector<int> v(n , 0);
	std::vector<double> result1(n, 0);
	double result2 = 0;



	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		if (v[i] > max)
		{
			max = v[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		result1[i] = static_cast<double>(v[i]) / max * 100;
		//std::cout << result1[i] << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		result2 = result2 + result1[i];
	}

	result2 = result2 / n;

	std::cout << result2;

	return 0;
}
//#include <iostream>
//#include <vector>
//#include <algorithm>  // std::max_element를 사용하기 위한 헤더
//
//int main() {
//    int N;
//    std::cin >> N;
//
//    std::vector<double> scores(N);
//    for (int i = 0; i < N; ++i) {
//        std::cin >> scores[i];
//    }
//
//    double maxScore = *std::max_element(scores.begin(), scores.end());
//
//    double sum = 0;
//    for (int i = 0; i < N; ++i) {
//        sum += (scores[i] / maxScore) * 100;
//       
//    }
//
//    double newAverage = sum / N;
//    std::cout << newAverage << std::endl;
//
//    return 0;
//}