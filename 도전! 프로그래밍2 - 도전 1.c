#include <stdio.h>

/*
���� 1
���̰� 10�� �迭�� �����ϰ� �� 10���� ������ �Է� �޾Ƽ�
Ȧ���� ¦���� ���� ���� ����ϴ� ���α׷��� �ۼ��غ���.
�ϴ� Ȧ���� ���� ����� �� ¦���� ����ϵ��� ����.
��, 10���� ������ main �Լ����� �Է� �޾ƾ� �Ѵ�.
���� �迭 ���� Ȧ���� ����ϴ� �Լ�, ¦���� ����ϴ� �Լ��� �����ؾ� �Ѵ�.
*/

void printodd(const int* arr)
{
	printf("Ȧ�� ���: ");
	int flag = 0; // ���ô�� ��ǥ�� ����ֱ� ���� flag
	for (int i = 0;i < 10;i++)
	{
		if (arr[i] % 2 > 0)
		{
			if (flag == 0)
			{
				printf("%d", arr[i]);
				flag = 1; // ù Ȧ���� �߰ߵǸ� flag�� 1�� �ȴ�.
			}
			else
				printf(", %d", arr[i]); // ���ķδ� ��ǥ�� �ٿ��ش�.
		}
	}
	printf("\n");
	return;
}

void printeven(const int* arr)
{
	printf("¦�� ���: ");
	int flag = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			if (flag == 0)
			{
				printf("%d", arr[i]);
				flag = 1;
			}
			else
				printf(", %d", arr[i]);
		}
	}
	printf("\n");
	return;
}

int main(void)
{
	int arr[10];
	for (int i = 0;i < 10;i++)
	{
		printf("�Է�: ");
		scanf("%d", arr + i);
	}
	printodd(arr);
	printeven(arr);

	return 0;
}