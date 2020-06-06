#include <stdio.h>

/*
도전 2
프로그램 사용자로부터 두 개의 정수를 입력 받아서 구구단을 출력하자.
예를 들어 3과 5를 입력하면 3, 4, 5단을 출력해야 한다.
또한, 3 5를 입력하든 5 3을 입력하든 같은 결과가 나타나야 한다.
*/

int main(void)
{
	int num1, num2, temp;
	printf("2부터 9까지 중 두 개의 정수를 입력해주세요: ");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		temp = num2;
		num2 = num1;
		num1 = temp;
	}

	for (num1;num1 <= num2;num1++)
	{
		printf("%d단 시작! \n", num1);
		for (temp = 1;temp < 10;temp++)
			printf("%d x %d = %d \n", num1, temp, num1 * temp);
		printf("\n");
	}

	return 0;

}
