#include <stdio.h>

int main(void)
{
	/*
	���� 1
	���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ� �� ���� ������ ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
	*/

	int num1, num2;
	printf("�� ���� ������ �Է����ּ���: ");
	scanf_s("%d %d", &num1, &num2);
	int result1 = num1 - num2, result2 = num1 * num2;
	printf("%d - %d = %d \n", num1, num2, result1), printf("%d x %d = %d \n", num1, num2, result2);

	/*
	���� 2
	���α׷� ����ڷκ��� �� ���� ���� num1, num2, num3�� ������� �Է� �޴´�.
	�� �� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
	2 x 4 + 6 = 14�� ���·� ����ؾ� �Ѵ�.
	*/

	printf("�� ���� ������ �ϳ��� �Է����ּ���: ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	int num3;
	scanf_s("%d", & num3);
	int result3 = num1 * num2 + num3;
	printf("%d x %d + %d = %d \n", num1, num2, num3, result3);

	/*
	���� 3
	�ϳ��� ������ �Է� �޾Ƽ�, �� ���� ������ ����ϴ� ���α׷��� �ۼ��غ���.
	*/

	printf("������ ���� ������ �Է����ּ���: ");
	scanf_s("%d", &num1);
	int result4 = num1 * num1;
	printf("%d^2 = %d \n", num1, result4);

	/*
	���� 4
	�Է� ���� �� ������ �������� �� ��� �Ǵ� ��� �������� ����ϴ� ���α׷��� �ۼ��غ���.
	*/

	printf("�� ���� ������ �Է����ּ���: ");
	scanf_s("%d %d", &num1, &num2);
	int result5 = num1 / num2, result6 = num1 % num2;
	printf("%d�� %d�� �������� ���� ���� %d�̰� �������� %d�Դϴ�. \n", num1, num2, result5, result6);

	/*
	���� 5
	�Է� ���� �� ���� ���� num1, num2, num3�� ������� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
	(num1 - num2)(num2 + num3)(num3 % num1)
	*/

	printf("�� ���� ������ �Է����ּ���: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	int result7 = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("����� %d�Դϴ�.", result7);

	return 0;

}