#include <stdio.h>
#include <stdlib.h>

/*
도전 6
친구와 둘이서 숫자 맞추기 게임을 해본 적이 있을 것이다.
이것을 컴퓨터와 할 수 있도록 프로그램을 작성해보자.

컴퓨터는 0과 9 사이의 숫자 중에서 서로 다른 세 개의 숫자를 고르고
사용자는 이것을 맞혀야 한다.
중요한 것은 순서까지 정확히 맞혀야 한다는 것이다.

단, 사용자가 예상한 숫자를 입력할 때마다 컴퓨터는 입력된 숫자와
컴퓨터 자신이 예상한 숫자가 얼마나 비슷한지를 알려줘야 한다.

이때 숫자만 같으면 ball, 숫자와 위치가 같으면 strike이다.
3 strike가 되면 프로그램은 종료된다.
몇 번 만에 3 strike를 얻었는지에 대해서도 출력해 주기로 하자.
*/

int main(void)
{
	printf("--------------- 야구 게임 --------------- \n");
	printf("정답은 서로 다른 세 개의 숫자로 이루어져 있습니다. \n");
	printf("시도 횟수를 최소한으로 줄여봅시다. \n");
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
				goto roop; // 중복인지 확인하는 과정
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
			printf("3개의 숫자 선택: ");
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
					break; // 두 개 이상 겹칠 일은 없으므로 하나 찾으면 루프를 나가면 된다.
				}
			}
		}

		printf("%d번째 도전 결과: %d strike, %d ball \n", cnt, strike, ball);
		if (strike == 3)
		{
			printf("\n%d번만에 승리! \n", cnt);
			break;
		}
		cnt++;
	}

	return 0;

}