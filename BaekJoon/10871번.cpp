//#include <iostream>
//
//int main(void)
//{
//	int n;
//	int x;
//
//	int arr[10000];
//
//	std::cin >> n >> x;
//
//	for (int i = 0; i < n; i++)
//	{
//		std::cin >> arr[i];
//	}
//
//
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] < 5)
//		{
//			std::cout << arr[i] << std::endl;
//		}
//	}
//	return 0;
//
//
//}
#include <iostream>

int main() {
    int N, X;
    std::cin >> N >> X;

    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;

        if (num < X) {
            std::cout << num << " ";
        }
    }

    return 0;
}