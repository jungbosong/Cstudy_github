
#include <stdio.h>



int main()

{

	int a = 5, b = 7, c = 4;	// a = ũ����, b = �����, c = �ݶ�

	int sum = 0;	// ũ����, �����, �ݶ� �հ�

	int m, i, j, k;	// m = ���� ���� ��, i = ũ���� ����, j = ����� ����, k = �ݶ󰳼�

	printf("���� ���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &m);

	for (i = 1; i < m/a-1; i++) {		

		for (j = 1; j < m/b-1; j++) {	

			for (k = 1; k < m/c-1; k++) {	

				sum = i*a + j*b + k*c;

				if (m == sum) {	

					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", i, j, k);

				}
				sum = 0;	// sum�� �ٽ� 0���� �����ָ� ��� ����
			}
		}
	}
	return 0;
}