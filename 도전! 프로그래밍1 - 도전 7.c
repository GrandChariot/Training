#include <stdio.h>

/*
도전 7
프로그램 사용자로부터 숫자 n을 입력 받는다.
그리고 나서 다음 공식이 성립하는 k의 최댓값을 계산해서 출력하는 프로그램을 작성해보자.
*/

int main(void)
{
	int n, k = 0, current = 1;
	printf("정수를 입력해주세요: ");
	scanf("%d", &n);

	while (1)
	{
		if (current > n)
			break;
		current *= 2;
		k++;
	}
	printf("공식을 만족하는 k의 최댓값은 %d \n", k - 1);
}