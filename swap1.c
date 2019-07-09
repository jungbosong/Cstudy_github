// 값에 의한 호출(변수의 복사본이 전달됨)
#include <stdio.h>
void swap(int x, int y);

int main(void)
{
	int a = 100, b = 200;

	printf("a=%d b=%d\n", a, b);
	swap(a, b);
	printf("a=%d b=%d\n", a,b);
	return 0;
}

void swap(int x, int y)
{
	int tmp;
	printf("x=%d y=%d\n",x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x=%d y=%d\n", x, y);
}