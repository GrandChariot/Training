#include <stdio.h>

int main(void)
{
	/*
	continue�� break�� ������ python�� ������ �����ϴ�.
	����ϰ� ���� �Ѿ��.
	*/

	/*
	1���� 20������ ���� �� 2�� ����� 3�� ����� �����ϰ� ����ϴ� ���α׷�
	continue�� break�� ���� Ȱ���ؼ� ¥����� �Ѵ�.
	*/

	int num = 0;
	while(1)
	{
		if (num == 20)
			break;
		num++;
		if (num % 2 == 0)
			continue;
		else if (num % 3 == 0)
			continue;
		printf("%d \n", num);
	}

	return 0;

}