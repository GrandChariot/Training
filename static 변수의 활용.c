#include <stdio.h>

/*
å�� �־���, ���������� Ȱ���� ���α׷��� static ������ ��ü�غ���.
*/

int AddToTotal(int num)
{
	static total; // ����� static ������ ���� �Է� ���ϰ� �ʱ�ȭ�ص� �׳� 0�� �Ǵ� �� �� �� �ִ�.
	total += num;
	return total;
}

int main(void)
{
	int num, i;
	for (i = 0;i < 3;i + 1)
	{
		scanf("%d", &num);
		printf("����: %d \n", AddToTotal(num));
	}

	return 0;
}