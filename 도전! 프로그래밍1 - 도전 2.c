#include <stdio.h>

/*
���� 2
���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ� �������� �������.
���� ��� 3�� 5�� �Է��ϸ� 3, 4, 5���� ����ؾ� �Ѵ�.
����, 3 5�� �Է��ϵ� 5 3�� �Է��ϵ� ���� ����� ��Ÿ���� �Ѵ�.
*/

int main(void)
{
	int num1, num2, temp;
	printf("2���� 9���� �� �� ���� ������ �Է����ּ���: ");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		temp = num2;
		num2 = num1;
		num1 = temp;
	}

	for (num1;num1 <= num2;num1++)
	{
		printf("%d�� ����! \n", num1);
		for (temp = 1;temp < 10;temp++)
			printf("%d x %d = %d \n", num1, temp, num1 * temp);
		printf("\n");
	}

	return 0;

}
