#include <stdio.h>
#include <stdlib.h>

/*
���� 6
ģ���� ���̼� ���� ���߱� ������ �غ� ���� ���� ���̴�.
�̰��� ��ǻ�Ϳ� �� �� �ֵ��� ���α׷��� �ۼ��غ���.

��ǻ�ʹ� 0�� 9 ������ ���� �߿��� ���� �ٸ� �� ���� ���ڸ� ����
����ڴ� �̰��� ������ �Ѵ�.
�߿��� ���� �������� ��Ȯ�� ������ �Ѵٴ� ���̴�.

��, ����ڰ� ������ ���ڸ� �Է��� ������ ��ǻ�ʹ� �Էµ� ���ڿ�
��ǻ�� �ڽ��� ������ ���ڰ� �󸶳� ��������� �˷���� �Ѵ�.

�̶� ���ڸ� ������ ball, ���ڿ� ��ġ�� ������ strike�̴�.
3 strike�� �Ǹ� ���α׷��� ����ȴ�.
�� �� ���� 3 strike�� ��������� ���ؼ��� ����� �ֱ�� ����.
*/

int main(void)
{
	printf("--------------- �߱� ���� --------------- \n");
	printf("������ ���� �ٸ� �� ���� ���ڷ� �̷���� �ֽ��ϴ�. \n");
	printf("�õ� Ƚ���� �ּ������� �ٿ����ô�. \n");
	printf("----------------------------------------- \n \n");

	int nums[3];
	int cnt = 0;
	srand((int)time(NULL));
roop:
	while (1)
	{
		int current = rand()%10;
		for (int index = 0;index < cnt; index++)
			if (current == nums[index])
				goto roop; // �ߺ����� Ȯ���ϴ� ����
		nums[cnt] = current;
		cnt++;
		if (cnt == 3)
			break;
	}

	cnt = 1;
	while (1)
	{
		int input[3];
		int strike = 0, ball = 0;
		do
		{
			printf("3���� ���� ����: ");
			scanf("%d %d %d", &input[0], &input[1], &input[2]);
		} while (input[0] == input[1] || input[1] == input[2] || input[0] == input[2]);

		for (int index = 0; index < 3; index++)
		{
			for (int index2 = 0; index2 < 3; index2++)
			{
				if (input[index] == nums[index2])
				{
					if (index == index2)
						strike++;
					else
						ball++;
					break; // �� �� �̻� ��ĥ ���� �����Ƿ� �ϳ� ã���� ������ ������ �ȴ�.
				}
			}
		}

		printf("%d��° ���� ���: %d strike, %d ball \n", cnt, strike, ball);
		if (strike == 3)
		{
			printf("\n%d������ �¸�! \n", cnt);
			break;
		}
		cnt++;
	}

	return 0;

}