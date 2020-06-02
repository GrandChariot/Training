#include <stdio.h>

int main(void)
{
	/*
	문제 3
	while문의 중첩 관련 예제 TwoToNine.c를 do~while문의 중첩 기반으로 재구현하자.
	do~while문의 중첩 방법은 while문의 중첩 방법과 완전히 같다.
	*/

	int num1 = 2, num2;
	do
	{
		num2 = 1;
		printf("%d단을 출력합니다. \n", num1);
		do
		{
			printf("%d x %d = %d \n", num1, num2, num1 * num2);
			num2++;
		} while (num2 < 10);
		
		num1++;
	} while(num1 < 10);

	printf("구구단 끝! \n");

	return 0;
}