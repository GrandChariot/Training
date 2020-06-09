#include <stdio.h>

/*
�� ���� int�� ������ ������ ���̰� 5�� int�� �迭�� �����Ѵ�.
�׸��� MaxAndMin�̶� �̸��� �Լ��� �����Ѵ�.
�̸� ȣ���ؼ� ���� �迭�� �� ������ ������ ���� ������ ��������.
ȣ���� �Ϸ�Ǹ�, maxPtr���� ���� ū ���� ����� �迭����� �ּ� ����,
minPtr���� ���� ���� ���� ����� �迭����� �ּ� ���� ����Ǿ�� �Ѵ�.
*/

void MaxAndMin(int** maxDptr, int** minDptr, int* arr)
{
	*maxDptr = &arr[0];
	*minDptr = &arr[0];
	for (int i = 1;i < 5;i++)
	{
		if (arr[i] > * *maxDptr)
			*maxDptr = &arr[i];
		else if (arr[i] < **minDptr)
			*minDptr = &arr[i];
	}

	return 0;
}

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		printf("������ �Է����ּ���: ");
		scanf("%d", &arr[i]);
	}
	MaxAndMin(&maxPtr, &minPtr, arr);

	printf("�ִ��� %d, �ּڰ��� %d�Դϴ�. \n", *maxPtr, *minPtr);
	return 0;
}