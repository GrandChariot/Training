#include <stdio.h>

/*
도전 5
2부터 10개의 소수를 출력하는 프로그램을 작성해보자.
여기에선 아직 array가 없으니 다 나눠보는 방식으로 해보기로 한다.
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