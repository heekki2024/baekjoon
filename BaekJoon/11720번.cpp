//#include <iostream>
//#include <string>
//#include <conio.h>
//
//int main(void)
//{
//	int n;
//	std::string numbers;
//
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		char ch = _getch();
//	//	std::cout << "\n입력받은 글자: " << ch << std::endl;
//
//		numbers.push_back(ch);
//	}
//
//	int sum = 0;
//	for (char num : numbers)
//	{
//
//		// 문자 0의 아스키코드는 48이다. 문자 '2'의 아스키 코드는 '50'이다.
//		// 문자 '2'의 숫자를 구하는 방법은 '2' - '0' == 50 - 48 = 2
//		sum += num - '0';
//	}
//
//	std::cout << sum;
//
//	return 0;
//
//}

#include <iostream>
#include <string>

int main() {
	int N;
	std::string numbers;

	// 숫자의 개수 N과 숫자들이 공백 없이 쓰인 문자열을 입력 받음
	std::cin >> N >> numbers;

	int sum = 0;
	for (char num : numbers) {
		// 문자를 정수로 변환하여 합계에 더함 ('0'을 빼주는 이유는 ASCII 코드에서의 숫자 위치 조정)
		sum += num - '0';
	}

	// 합계 출력
	std::cout << sum << std::endl;

	return 0;
}
