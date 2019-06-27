
#include <stdio.h>



int main()

{

	int a = 5, b = 7, c = 4;	// a = 크림빵, b = 새우깡, c = 콜라

	int sum = 0;	// 크림빵, 새우깡, 콜라 합계

	int m, i, j, k;	// m = 내가 가진 돈, i = 크림빵 개수, j = 새우깡 개수, k = 콜라개수

	printf("현재 가진 돈을 입력하시오: ");
	scanf("%d", &m);

	for (i = 1; i < m/a-1; i++) {		

		for (j = 1; j < m/b-1; j++) {	

			for (k = 1; k < m/c-1; k++) {	

				sum = i*a + j*b + k*c;

				if (m == sum) {	

					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", i, j, k);

				}
				sum = 0;	// sum을 다시 0으로 안해주면 계속 쌓임
			}
		}
	}
	return 0;
}