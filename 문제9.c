// ���� ���α׷����� ip�� ���� ������� �ʴ� ������ �����ΰ�?
#include <stdio.h>

void f(int *p)
{
	static int data = 5;	// static �����Ҵ�
	p = &data;				// p�� ���� data�� �ּҸ� ����
							// ���������� �ؾ� �ٲ�ٰ�?
}

int main(void)
{
	int *ip=NULL;		
	f(ip);
}