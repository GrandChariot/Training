#include <stdio.h>

int main(void)
{
	/*
	���� 4
	���� ���� 2�� if~else���� �̿��ؼ� �ذ��Ͽ��°�?
	���� �����ڸ� �̿��ϴ� ���·� �ٽ� ������.
	*/

	int num1, num2, num3;
	printf("�� ���� ������ �Է����ּ���: ");
	scanf("%d %d", &num1, &num2);
	num3 = num1 > num2 ? num1 - num2 : num2 - num1;
	printf("%d", num3);

	return 0;
}