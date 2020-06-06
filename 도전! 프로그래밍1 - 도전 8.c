#include <stdio.h>

/*
도전 8
2의 n승을 구하는 함수를 재귀적으로 구현해 보자.
그리고 그에 따른 적절한 main 함수도 구현해보자.
재귀함수의 구현이 처음에는 어려운 편이기 때문에 여기서는 쉬운 문제를 제시한다.
*/

int temp(int num)
{
	if (num == 0)
		return 1;
	return 2 * temp(num - 1);
}

int main(void)
{
	int num;
	printf("정수를 입력해주세요 \n");
	scanf("%d", &num);
	printf("2의 %d승은 %d입니다. \n", num, temp(num));

	return 0;
}