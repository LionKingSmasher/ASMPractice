#include "sys.h"

void Calculate::Calculate_(unsigned char u,unsigned* a, unsigned* b) {
	__asm {
		mov esi, u; //u�� esi �������Ϳ� ����
		mov eax, a; //a�� eax �������Ϳ� ����
		mov edx, b; //b�� edx �������Ϳ� ����
		mov edx, [edx]; //edx�� edx�� �����͸� ����

		cmpsb
	}
}