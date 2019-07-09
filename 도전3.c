#include <stdio.h>

int main()
{
	int n[10];	// 입력받은 수를 재배열할 배열
	int k;		// 사용자로부터 입력받은 수
	int s = 0;	// 배열 n의 처음부터
	int t = 9;	// 배열 n의 끝부터

	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &k);

		switch (k % 2) {	
		case 0: n[t] = k;	t--; 	break;	// 짝수면 뒤에부터
		default: n[s] = k;	s++;	break;	// 홀수면 앞에부터
		}	
	}
	printf("배열요소의 출력: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", n[i]);
	}
}