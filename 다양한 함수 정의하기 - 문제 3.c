#include <stdio.h>

/*
문제 3
인자로 전달된 수만큼의 피보나치 수열을 출력하는 함수를 만들어보자.
예를 들어서 프로그램 사용자가 5를 입력하면 0에서부터 시작해서 총 5개를 출력해야 한다.
*/

void fibonacci(int num)
{
	int prev1 = 0, prev2 = 1;
	if (num == 0)
		return;
	printf("%d ", prev1);
	if (num == 1)
		return;
	printf("%d ", prev2);
	for (int index = 2; index < num;index++)
	{
		int next = prev1 + prev2;
		printf("%d ", next);
		prev1 = prev2, prev2 = next;
	}
	printf("\n");
	return;
}

int main(void)
{
	int num;
	printf("음이 아닌 정수를 입력해주세요: ");
	scanf("%d", &num);
	fibonacci(num);

	return 0;
}