#include <stdio.h>

/*
���� 3
���̰� 10�� �迭�� �����ϰ� �� 10���� ������ �Է� �޴´�.
��, �Է� ���� ���ڰ� Ȧ���̸� �迭�� �տ������� ä��������
¦���̸� �ڿ������� ä�������� ������ ���ϱ�� ����.
���� ����ڰ� [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]�� �Է��ߴٸ�
����� [1, 3, 5, 7, 9, 10, 8, 6, 4, 2]�� ����Ǿ�� �Ѵ�.
*/

int main(void)
{
	int num, numodd = 0, numeven = 0;
	int arr[10], evenarr[10];
	for (int i = 0;i < 10;i++)
	{
		printf("������ �Է����ּ���: ");
		scanf("%d", &num);
		if (num % 2 == 1)
		{
			arr[numodd] = num;
			numodd++;
		}
		else
		{
			evenarr[numeven] = num;
			numeven++;
		}
	}
	for (numeven;numeven > 0;numeven--, numodd++)
		arr[numodd] = evenarr[numeven-1];

	for (int i = 0; i < numodd;i++)
		printf("%d ", arr[i]);
	printf("\n"); // ��� ������ �����������Ƿ� �� ���� ����� ���� �� ����.
		
	return 0;
}