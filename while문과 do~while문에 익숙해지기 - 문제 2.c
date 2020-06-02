#include <stdio.h>

int main(void)
{
	/*
	문제 2
	0 이상 100 이하의 정수 중에서 짝수의 합을 출력하는 프로그램을 구현하되
	do~while문 기반으로 구현해보자.
	참고로 덧셈의 결과는 2550이 되어야 한다.
	*/

	int num = 2, sum = 0;
	do
	{
		sum = sum + num;
		num += 2;
	} while (num <= 100);

	printf("%d", sum);

	return 0;
}