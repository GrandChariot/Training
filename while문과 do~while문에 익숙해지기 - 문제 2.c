#include <stdio.h>

int main(void)
{
	/*
	���� 2
	0 �̻� 100 ������ ���� �߿��� ¦���� ���� ����ϴ� ���α׷��� �����ϵ�
	do~while�� ������� �����غ���.
	����� ������ ����� 2550�� �Ǿ�� �Ѵ�.
	*/

	int num = 2, sum = 0;
	do
	{
		sum = sum + num;
		num += 2;
	} while (num <= 100);

	printf("%d", sum);

	return 0;
}