#include <stdio.h>

int main(void)
{
	/*
	문제 2
	다음 수식은 계승(팩토리얼)을 계산하는 프로그램을 작성해보자.
	n! = 1 x 2 x 3 x .... x n
	프로그램 사용자로부터 n에 해당하는 정수를 입력 받는다.
	그러면 n의 계승 n!를 계산해서 출력이 이뤄져야 한다.
	*/

	int input, result = 1;
	printf("계승을 구할 정수를 입력해주세요: ");
	scanf("%d", &input);
	for (int num = 2; num <= input; num++)
	{
		result *= num;
	}

	printf("결과는 %d입니다.", result);
	return 0;

}