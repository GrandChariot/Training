#include <stdio.h>

int main(void)
{
	/*
	���� 3
	while���� ��ø ���� ���� TwoToNine.c�� do~while���� ��ø ������� �籸������.
	do~while���� ��ø ����� while���� ��ø ����� ������ ����.
	*/

	int num1 = 2, num2;
	do
	{
		num2 = 1;
		printf("%d���� ����մϴ�. \n", num1);
		do
		{
			printf("%d x %d = %d \n", num1, num2, num1 * num2);
			num2++;
		} while (num2 < 10);
		
		num1++;
	} while(num1 < 10);

	printf("������ ��! \n");

	return 0;
}