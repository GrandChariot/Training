#include <stdio.h>

/*
���� 5
2���� 10���� �Ҽ��� ����ϴ� ���α׷��� �ۼ��غ���.
���⿡�� ���� array�� ������ �� �������� ������� �غ���� �Ѵ�.
*/

int main(void)
{
	int target = 3, num, cnt = 1;
	printf("%d ", 2);

	while (1)
	{
		for (num = 2; num < target; num++)
		{	
			if (target % num == 0)
				break;
			if (num == target - 1)
			{
				printf("%d ", target);
				cnt++;
			}
		}

		if (cnt == 10)
		{
			printf("\n");
			break;
		}
		target++;
	}
}