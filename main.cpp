#include "sys.h"
#include <iostream>
#include <cstdio>

#define DEBUG 0

int main() {
#if DEBUG==0
	SYS sys;
	unsigned int a, b;
	std::cout << "����(��������� ver.)" << std::endl;
	std::cout << "�Է��ϼ���: ";
	std::cin >> a;
	std::cout << "�Է��ϼ���: ";
	std::cin >> b;
	sys.Compare_CPP(&a, &b);
	std::cout << "���: " << a;
#elif DEBUG==1
	while (true) {
		char user_input;
		std::cout << "���� 16���� ��ȯ" << std::endl;
		std::cout << "�Է�: " << std::endl;
		std::cin >> user_input;
		printf("%x", user_input);
	}
#endif
}