#include <stdio.h>

int print_even(int number[]);		// Ȧ�� ����ϴ� �Լ�
int print_odd(int number[]);		// ¦�� ����ϴ� �Լ�

int main()
{
	int n[10];
	printf("�� 10���� ���� �Է�\n");
	for (int i = 0; i < 10; i++)	
	{
		printf("�Է�: ");
		scanf("%d", &n[i]);
	}
	print_even(n);
	printf("\n");
	print_odd(n);
}
// Ȧ�� ��� �Լ�
int print_even(int number[])
{
	printf("Ȧ�� ���: ");
	for (int i = 0; i < 10; i++)	
	{
		if (number[i] % 2 != 0)		
			printf("%d ", number[i]);
	}
}
// ¦�� ����Լ�
int print_odd(int number[])
{
	printf("¦�� ���: ");
	for (int i = 0; i < 10; i++)
	{
		if (number[i] % 2 == 0)
			printf("%d ", number[i]);
	}
}