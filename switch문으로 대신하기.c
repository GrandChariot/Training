#include <stdio.h>

int main(void)
{
	/*
	switch���� ��� if ... else if ... else�� ����ϱ⿡�� ������ �ִ�.
	�׷��� �ణ�� ������ ���� ���� ���ø� switch������ ������ �� �ִ�.
	*/

	int num, index;
	printf("������ �Է����ּ���: ");
	scanf("%d", &num);

	if (num < 10)
		index = 0;
	else if (num < 20)
		index = 1;
	else if (num < 30)
		index = 2;
	else
		index = 3;

	switch (index)
	{
	case 0:
		printf("0 �̻� 10 �̸� \n");
		break;
	case 1:
		printf("10 �̻� 20 �̸� \n");
		break;
	case 2:
		printf("20 �̻� 30 �̸� \n");
		break;
	default:
		printf("30 �̻� \n");
		break;
	}

	return 0;
}