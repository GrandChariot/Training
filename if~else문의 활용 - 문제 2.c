#include <stdio.h>

int main(void)
{
	/*
	문제 2
	두 개의 정수를 입력 받아서 두 수의 차를 출력하는 프로그램을 구현해 보자.
	단, 무조건 큰 수에서 작은 수를 뺀 결과를 출력해야 한다.
	예를 들어서 입력된 두 수가 순서에 상관없이 4와 16이라면 12가 출력되어야 한다.
	즉, 출력 결과는 무조건 0 이상이 되어야 한다.
	*/

	int num1, num2;
	printf("두 개의 정수를 입력해주세요: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		printf("%d", num1 - num2);
	}
	else
	{
		printf("%d", num2 - num1);
	}

	return 0;

}