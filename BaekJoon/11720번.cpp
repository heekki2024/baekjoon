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
//	//	std::cout << "\n�Է¹��� ����: " << ch << std::endl;
//
//		numbers.push_back(ch);
//	}
//
//	int sum = 0;
//	for (char num : numbers)
//	{
//
//		// ���� 0�� �ƽ�Ű�ڵ�� 48�̴�. ���� '2'�� �ƽ�Ű �ڵ�� '50'�̴�.
//		// ���� '2'�� ���ڸ� ���ϴ� ����� '2' - '0' == 50 - 48 = 2
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

	// ������ ���� N�� ���ڵ��� ���� ���� ���� ���ڿ��� �Է� ����
	std::cin >> N >> numbers;

	int sum = 0;
	for (char num : numbers) {
		// ���ڸ� ������ ��ȯ�Ͽ� �հ迡 ���� ('0'�� ���ִ� ������ ASCII �ڵ忡���� ���� ��ġ ����)
		sum += num - '0';
	}

	// �հ� ���
	std::cout << sum << std::endl;

	return 0;
}
