#include <stdio.h>

int main(void)
{
	/*
	���� 2
	���� ������ ���(���丮��)�� ����ϴ� ���α׷��� �ۼ��غ���.
	n! = 1 x 2 x 3 x .... x n
	���α׷� ����ڷκ��� n�� �ش��ϴ� ������ �Է� �޴´�.
	�׷��� n�� ��� n!�� ����ؼ� ����� �̷����� �Ѵ�.
	*/

	int input, result = 1;
	printf("����� ���� ������ �Է����ּ���: ");
	scanf("%d", &input);
	for (int num = 2; num <= input; num++)
	{
		result *= num;
	}

	printf("����� %d�Դϴ�.", result);
	return 0;

}