#include <stdio.h>
#include <stdlib.h>

/*
가위 바위 보 게임을 만들어보자.
사용자로부터 가위 바위 보 중에 하나를 입력 받는다.
그리고 컴퓨터는 난수 생성을 통해서 가위 바위 보 중에서 하나를 선택하게 된다.
이 둘을 비교해서 승자와 패자를 가려주는 프로그램을 작성해 보자.
단, 프로그램의 진행은 사용자가 질 때까지 계속되어야 하고,
마지막에 가서는 게임의 결과까지 출력해주도록 하자.
*/
int rsp(int player, int com)
{
	if (player - com == 1 || com - player == 2)
		return 0; // 짐!
	if (player == com)
		return 1; // 비김!
	if (com - player == 1 || player - com == 2)
		return 2; // 이김!
	else
		return;
}

int main(void)
{
	int win = 0, draw = 0;
	while (1)
	{
		int player, com;
		char* playerstr, *comstr;
		do
		{
			printf("바위는 1, 가위는 2, 보는 3: ");
			scanf("%d", &player);
		} while (player < 1 || player >3);
		
		if (player == 1)
			playerstr = "바위";
		else if (player == 2)
			playerstr = "가위";
		else
			playerstr = "보";

		srand((int)time(NULL));
		com = rand() % 3 + 1;
		if (com == 1)
			comstr = "바위";
		else if (player == 2)
			comstr = "가위";
		else
			comstr = "보";

		int result = rsp(player, com);
		if (result == 0)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신은 졌습니다... \n", playerstr, comstr);
			break;
		}
		else if (result == 1)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다. \n", playerstr, comstr);
			draw++;
		}
		else
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신은 이겼습니다! \n", playerstr, comstr);
			win++;
		}
	}

	printf("\n게임의 결과: %d승 %d무 \n", win, draw);

	return 0;
}