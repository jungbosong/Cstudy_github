#include <stdio.h>

int print_even(int number[]);		// 홀수 출력하는 함수
int print_odd(int number[]);		// 짝수 출력하는 함수

int main()
{
	int n[10];
	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++)	
	{
		printf("입력: ");
		scanf("%d", &n[i]);
	}
	print_even(n);
	printf("\n");
	print_odd(n);
}
// 홀수 출력 함수
int print_even(int number[])
{
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++)	
	{
		if (number[i] % 2 != 0)		
			printf("%d ", number[i]);
	}
}
// 짝수 출력함수
int print_odd(int number[])
{
	printf("짝수 출력: ");
	for (int i = 0; i < 10; i++)
	{
		if (number[i] % 2 == 0)
			printf("%d ", number[i]);
	}
}