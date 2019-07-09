// 참조에 의한 호출(변수의 원본이 전달됨
#include <stdio.h>
void swap(int *px, int *py);

int main(void)
{
	int a = 100, b = 200;

	printf("a=%d b=%d", a,b);
	swap(&a,&b);
	printf("a=%d b=%d\n", a,b);

	return 0;
}

void swap(int *px, int *py)
{
	int tmp;
	 
	tmp = *px;		// tmp = a;
	*px = *py;		// a = b;
	*py = tmp;		// b = tmp;
}