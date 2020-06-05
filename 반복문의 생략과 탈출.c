#include <stdio.h>

int main(void)
{
	/*
	continue와 break의 사용법은 python과 완전히 동일하다.
	편안하게 보고 넘어가자.
	*/

	/*
	1부터 20까지의 정수 중 2의 배수와 3의 배수는 제외하고 출력하는 프로그램
	continue와 break를 적극 활용해서 짜보기로 한다.
	*/

	int num = 0;
	while(1)
	{
		if (num == 20)
			break;
		num++;
		if (num % 2 == 0)
			continue;
		else if (num % 3 == 0)
			continue;
		printf("%d \n", num);
	}

	return 0;

}