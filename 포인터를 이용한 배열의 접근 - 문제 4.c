#include <stdio.h>

/*
���� 4
���̰� 6�� int�� �迭 arr�� �����ϰ� �̸� {1, 2, 3, 4, 5, 6}���� �ʱ�ȭ����.
�迭�� ������ ���� ������ 6, 5, 4, 3, 2, 1�� �ǵ��� �����غ���.
��, �迭�� �հ� �ڸ� ����Ű�� ������ ���� �� ���� �����ؼ� �̸� Ȱ���ؾ� �Ѵ�.
*/

int main(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* ptrfront = arr, * ptrback = arr + 5;
	int temp;
	for (int i = 0;i < 3;i++)
	{
		temp = *ptrfront;
		*ptrfront = *ptrback;
		*ptrback = temp; // �̰� �³� �Ǿ��ߴ� �κ��ε�, ��ȿ����� �̷��� ���� �����͸� �����.
		ptrfront++;
		ptrback--;
	}

	for (int i = 0; i < 6;i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}
