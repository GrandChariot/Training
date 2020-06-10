#include <stdio.h>

/*
���� 1
���̰� 4 x 4�� int�� 2���� �迭�� �����ϰ�
��� ��Ҹ� �Ʒ� �׸��� ���ʿ� �ִ� ���¿� �����ϰ� �ʱ�ȭ����.
�׸��� �迭�� ��ҵ��� ������ �������� 90���� �̵���Ų ��
�� ����� ����ϴ� ���α׷��� �ۼ��غ���.
*/

void rotate(int(*arr)[4])
{
	int newarr[4][4];
	for (int i = 0;i < 4;i++)
		for (int j = 0;j < 4;j++)
			newarr[j][3-i] = arr[i][j];
	for (int i = 0;i < 4;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			arr[i][j] = newarr[i][j];
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(void)
{
	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	for (int i = 0;i < 4;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	rotate(arr);
	rotate(arr);
	rotate(arr);

	return 0;
}