// 다음 프로그램에서 ip의 값이 변경되지 않는 이유는 무엇인가?
#include <stdio.h>

void f(int *p)
{
	static int data = 5;	// static 정적할당
	p = &data;				// p에 변수 data의 주소를 대입
							// 간접참조를 해야 바뀐다고?
}

int main(void)
{
	int *ip=NULL;		
	f(ip);
}