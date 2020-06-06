#include <stdio.h>

int main(void)
{
	/*
	switch문이 모든 if ... else if ... else를 대신하기에는 무리가 있다.
	그러나 약간의 조작을 통해 앞의 예시를 switch문으로 변경할 수 있다.
	*/

	int num, index;
	printf("정수를 입력해주세요: ");
	scanf("%d", &num);

	if (num < 10)
		index = 0;
	else if (num < 20)
		index = 1;
	else if (num < 30)
		index = 2;
	else
		index = 3;

	switch (index)
	{
	case 0:
		printf("0 이상 10 미만 \n");
		break;
	case 1:
		printf("10 이상 20 미만 \n");
		break;
	case 2:
		printf("20 이상 30 미만 \n");
		break;
	default:
		printf("30 이상 \n");
		break;
	}

	return 0;
}