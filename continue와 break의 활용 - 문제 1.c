#include <stdio.h>

int main(void)
{
	/*
	���� 1
	�������� ����ϵ� ¦�� ��(2��, 4��, 6��, 8��)�� ����ϵ��� ����.
	���� 2���� 2x2����, 4���� 4x4����...�� ��µǵ��� ���α׷��� �����غ���.
	�̷��� ������� ������ �����ϴ� ������ continue�� break�� ����ϱ� ���ؼ���.
	������ continue�� break�� �ִ��� Ȱ���غ���.
	*/

	int num1 = 2, num2;
	while (num1 < 10)
	{
		num2 = 1;
		while(1)
		{
			printf("%d x %d = %d \n", num1, num2, num1 * num2);
			if (num1 == num2)
				break;
			num2++;
		}

		num1 += 2;
	}

	return 0;
}