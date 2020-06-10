#include <stdio.h>

/*
������ �迭�� ���� �̸� ����ϴ� ���α׷��� �ۼ��ϰ��� �Ѵ�.
���⼭ ���ϴ� ������ �迭�� ������ ����.
���α׷� ����ڷκ��� ������ �迭�� ũ�� n�� �Է¹޾Ƽ�
n x n�� ������ �迭�� ������ִ� ���α׷��� ������.
*/

void snail(int num)
{
	int arr[20][20];
	int newnum = 1;
	int i = 0, j = 0, limit = 0;
	while (num <= 20 && num >= 0)
	{
		for (;j < num - limit;j++)
			arr[i][j] = newnum++;
		if (newnum > num * num)
			break;
		i += 1; j -= 1;

		for (;i < num-limit;i++)
			arr[i][j] = newnum++;
		j -= 1; i -= 1;

		if (newnum > num * num)
			break;
		for (; j >= limit; j--)
			arr[i][j] = newnum++;
		i -= 1; j += 1;
		limit++;

		for (; i >= limit; i--)
			arr[i][j] = newnum++;
		j += 1; i += 1;
	}

	for (int i = 0;i < num && num < 21; i++)
	{
		for (int j = 0;j < num;j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int n;
	do
	{
		printf("20 ������ ������ �Է����ּ���: ");
		scanf("%d", &n);
	} while (n > 20 || n < 0);

	snail(n);

	return 0;
}