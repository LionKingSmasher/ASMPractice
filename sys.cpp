#include "sys.h"

void SYS::Compare_ASM(unsigned* a, unsigned* b) {
	__asm {
		mov eax, a; //eax 레지스터에 포인터 a가 가르키는 주소값 넣기
		mov edx, b; //edx 레지스터에 포인터 b가 가르키는 주소값 넣기
		mov edx, [edx]; //edx 레지스터에 edx레지스터에 있는 포인터 값 넣기
		cmp [eax], edx; //eax 레지스터가 가르키는 주소에 있는 값과 edx 레지스터에 있는 값을 비교
		je L1; //만약 비교했을 때, 같을 경우 L1로 이동
		jne L2; //다를 경우 L2로 이동

	L1:
		inc [eax]; //eax가 가르키는 주소에 있는 값에 +1하기
		jmp EXIT;

	L2:
		dec [eax]; //eax가 가르키는 주소에 있는 값에 -1하기
		jmp EXIT;

	EXIT:
	}
}
void SYS::Compare_CPP(unsigned* a, unsigned* b) {
	if (*a == *b) *a += 1;
	else if (*a != *b) *a -= 1;
}