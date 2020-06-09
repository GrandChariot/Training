#include <stdio.h>

/*
도전 2
프로그래밍 사용자로부터 10진수 형태로 정수를 하나 입력 받은 다음
이를 2진수로 변환해서 출력하는 프로그램을 작성해보자.
*/

void printbinary(int num)
{
	char result[10000];
	int i = 0;
	while (1)
	{
		char temp = num % 2;
		num = num / 2;
		result[i] = temp;
		if (num == 0)
			break;
		i++;
	}
	
	for (i;i >= 0;i--)
		printf("%d", result[i]);
	printf("\n");
}

int main(void)
{
	int num;
	printf("정수를 입력해주세요: ");
	scanf("%d", & num);
	printbinary(num);
	return 0;
}