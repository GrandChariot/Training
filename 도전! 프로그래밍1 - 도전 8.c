#include <stdio.h>

/*
���� 8
2�� n���� ���ϴ� �Լ��� ��������� ������ ����.
�׸��� �׿� ���� ������ main �Լ��� �����غ���.
����Լ��� ������ ó������ ����� ���̱� ������ ���⼭�� ���� ������ �����Ѵ�.
*/

int temp(int num)
{
	if (num == 0)
		return 1;
	return 2 * temp(num - 1);
}

int main(void)
{
	int num;
	printf("������ �Է����ּ��� \n");
	scanf("%d", &num);
	printf("2�� %d���� %d�Դϴ�. \n", num, temp(num));

	return 0;
}