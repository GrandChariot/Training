#include <stdio.h>

/*
���� 1
���̰� 5�� int�� �迭�� ������ �� �� 5���� ������ �Է¹���.
�Է��� ������ �� �� �ִ�, �ּڰ��� ������ �Է�����.
��, �Է��� �Ϸ��� ���¿��� �迭�� ������� ���ؾ� �Ѵ�.
*/

int main(void)
{
	int list[5];
	printf("5���� ������ �Է����ּ���: ");
	scanf("%d %d %d %d %d", &list[0], &list[1], &list[2], &list[3], &list[4]);
	int max = list[0], min = list[0], sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int current = list[i];
		if (current > max)
			max = current;
		if (current < min)
			min = current;
		sum += current;
	}
	
	printf("�ִ�� %d, �ּҴ� %d, �հ�� %d�Դϴ�. \n", max, min, sum);
	return 0;
}