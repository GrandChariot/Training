#include <stdio.h>

/*
���� 5
�̹����� ���� �˰����� �ϳ� �Ұ��ϰڴ�.
�����Ʈ�̹Ƿ� �����Ѵ�.(����?)
�迭�� ����Ǿ��ִ� ��ҵ��� ������������ �����ϴ� �ڵ带 �����Ʈ�� �ۼ��غ���.
�Լ����� DesSort�� �Ѵ�.
���� main �Լ����� 7���� ������ �Է¹޾� �Լ��� ���� �����غ���.
*/

void DesSort(int* arr, int length)
{
	for (int index = 0;index < length;index++)
		for (int index2 = 0; index2 < length-1 - index;index2++)
		{
			int temp;
			if (arr[index2] < arr[index2 + 1])
			{
				temp = arr[index2];
				arr[index2] = arr[index2 + 1];
				arr[index2 + 1] = temp;
			}
		}
}

int main(void)
{
	int arr[7];
	for (int i = 0;i < 7;i++)
	{
		int num;
		printf("�Է�: ");
		scanf("%d", &num);
		arr[i] = num;
	}

	DesSort(arr, 7);
	for (int i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}