#include <stdio.h>

int main(void)
{
	/*
	문제 1
	바로 위에서 보인 예제 UsefulDoWhile.c를 while문 기반으로 재구현하자.
	생각해볼 수 있는 방법은 두 가지이다.
	
	방법 1
	변수 num의 값을 적절히 초기화해서 첫 번째 결과가 '참'이 되게 한다.
	방법 2
	while문에 진입하기 전에 프로그램 사용자로부터 값을 1회 입력 받게 한다.
	
	어느 방법을 쓰든 do~while보단 부적절함을 느낄 수 있을 것이다.
	*/

	int num = 1, sum = 0;
	while (num != 0)
	{
		printf("정수를 하나 입력해주세요: ");
		scanf("%d", &num);
		sum = sum + num;
	}

	printf("합은 %d입니다. \n", sum);

	return 0;
}
