#include <stdio.h>

int main(void)
{
	/*
	문제 4
	위의 문제 2를 if~else문을 이용해서 해결하였는가?
	조건 연산자를 이용하는 형태로 다시 만들어보자.
	*/

	int num1, num2, num3;
	printf("두 개의 정수를 입력해주세요: ");
	scanf("%d %d", &num1, &num2);
	num3 = num1 > num2 ? num1 - num2 : num2 - num1;
	printf("%d", num3);

	return 0;
}