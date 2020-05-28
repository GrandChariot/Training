#include <stdio.h>

int main(void)
{
	int num1, num2;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	int result = num1 + num2;
	printf("%d와 %d의 합은 %d입니다.", num1, num2, result);

	return 0;
}