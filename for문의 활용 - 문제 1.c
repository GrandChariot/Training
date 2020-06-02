#include <stdio.h>

int main(void)
{
	/*
	문제 1
	프로그램 사용자로부터 두 개의 정수를 입력받는다.
	그리고 두 정수를 포함하여 그 사이에 존재하는 정수들의 합을 계산해서 출력한다.
	예를 들어, 3과 5가 입력되면 출력값은 3+4+5 = 12이다.
	또한, 첫 번째 입력되는 정수보다 두 번째 입력되는 정수가 더 커야하는 조건을 걸었다.
	*/

	int num1 = 0, num2 = 0, sum = 0;
	printf("두 개의 정수를 입력해주세요: ");
	scanf("%d %d", &num1, &num2);

	for (;num1 <= num2;num1++)
	{
		sum = sum + num1;
	}

	printf("%d", sum);

	return 0;

}