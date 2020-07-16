#include "sys.h"

void Calculate::Add(unsigned* a, unsigned* b) {
	__asm {
		mov eax, a;
		mov edx, b;
		mov edx, [edx];
		add[eax], edx;
	}
}
void Calculate::Sub(unsigned* a, unsigned* b) {
	__asm {
		mov eax, a;
		mov edx, b;
		mov edx, [edx];
		sub[eax], edx;
	}
}
/*
void Calculate::Mul(unsigned* a, unsigned* b) {
	__asm {
		mov eax, a;
		mov edx, b;
		mov edx, [edx];
		mul[eax], edx;
	}
}
void Calculate::Div(unsigned* a, unsigned* b) {
	__asm {
		mov eax, a;
		mov edx, b;
		mov edx, [edx];
		div[eax], edx;
	}
}
*/