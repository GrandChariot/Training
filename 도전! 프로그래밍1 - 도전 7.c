#include <stdio.h>

/*
���� 7
���α׷� ����ڷκ��� ���� n�� �Է� �޴´�.
�׸��� ���� ���� ������ �����ϴ� k�� �ִ��� ����ؼ� ����ϴ� ���α׷��� �ۼ��غ���.
*/

int main(void)
{
	int n, k = 0, current = 1;
	printf("������ �Է����ּ���: ");
	scanf("%d", &n);

	while (1)
	{
		if (current > n)
			break;
		current *= 2;
		k++;
	}
	printf("������ �����ϴ� k�� �ִ��� %d \n", k - 1);
}