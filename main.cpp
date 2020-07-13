#include "sys.h"
#include <iostream>
#include <cstdio>

#define DEBUG 0

int main() {
#if DEBUG==0
	SYS sys;
	unsigned int a, b;
	std::cout << "계산기(어셈블리어 ver.)" << std::endl;
	std::cout << "입력하세요: ";
	std::cin >> a;
	std::cout << "입력하세요: ";
	std::cin >> b;
	sys.Compare_CPP(&a, &b);
	std::cout << "결과: " << a;
#elif DEBUG==1
	while (true) {
		char user_input;
		std::cout << "문자 16진수 변환" << std::endl;
		std::cout << "입력: " << std::endl;
		std::cin >> user_input;
		printf("%x", user_input);
	}
#endif
}
