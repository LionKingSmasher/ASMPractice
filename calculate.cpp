#include "sys.h"

void Calculate::Calculate_(unsigned char u,unsigned* a, unsigned* b) {
	__asm {
		mov esi, u; //u를 esi 레지스터에 저장
		mov eax, a; //a를 eax 레지스터에 저장
		mov edx, b; //b를 edx 레지스터에 저장
		mov edx, [edx]; //edx에 edx의 포인터를 저장

		cmpsb
	}
}