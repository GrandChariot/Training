#include <stdio.h>

/*
달팽이 배열을 만들어서 이를 출력하는 프로그램을 작성하고자 한다.
여기서 말하는 달팽이 배열은 다음과 같다.
프로그램 사용자로부터 달팽이 배열의 크기 n을 입력받아서
n x n의 달팽이 배열을 출력해주는 프로그램을 만들자.
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
		printf("20 이하의 정수를 입력해주세요: ");
		scanf("%d", &n);
	} while (n > 20 || n < 0);

	snail(n);

	return 0;
}