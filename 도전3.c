#include <stdio.h>

int main()
{
	int n[10];	// �Է¹��� ���� ��迭�� �迭
	int k;		// ����ڷκ��� �Է¹��� ��
	int s = 0;	// �迭 n�� ó������
	int t = 9;	// �迭 n�� ������

	printf("�� 10���� ���� �Է�\n");
	for (int i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf("%d", &k);

		switch (k % 2) {	
		case 0: n[t] = k;	t--; 	break;	// ¦���� �ڿ�����
		default: n[s] = k;	s++;	break;	// Ȧ���� �տ�����
		}	
	}
	printf("�迭����� ���: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", n[i]);
	}
}