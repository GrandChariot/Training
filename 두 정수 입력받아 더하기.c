#include <stdio.h>

int main(void)
{
	int num1, num2;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	int result = num1 + num2;
	printf("%d�� %d�� ���� %d�Դϴ�.", num1, num2, result);

	return 0;
}