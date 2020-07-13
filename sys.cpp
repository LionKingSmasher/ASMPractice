#include "sys.h"

void SYS::Compare_ASM(unsigned* a, unsigned* b) {
	__asm {
		mov eax, a; //eax �������Ϳ� ������ a�� ����Ű�� �ּҰ� �ֱ�
		mov edx, b; //edx �������Ϳ� ������ b�� ����Ű�� �ּҰ� �ֱ�
		mov edx, [edx]; //edx �������Ϳ� edx�������Ϳ� �ִ� ������ �� �ֱ�
		cmp [eax], edx; //eax �������Ͱ� ����Ű�� �ּҿ� �ִ� ���� edx �������Ϳ� �ִ� ���� ��
		je L1; //���� ������ ��, ���� ��� L1�� �̵�
		jne L2; //�ٸ� ��� L2�� �̵�

	L1:
		inc [eax]; //eax�� ����Ű�� �ּҿ� �ִ� ���� +1�ϱ�
		jmp EXIT;

	L2:
		dec [eax]; //eax�� ����Ű�� �ּҿ� �ִ� ���� -1�ϱ�
		jmp EXIT;

	EXIT:
	}
}
void SYS::Compare_CPP(unsigned* a, unsigned* b) {
	if (*a == *b) *a += 1;
	else if (*a != *b) *a -= 1;
}