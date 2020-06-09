#include <stdio.h>

/*
문제 1
가로의 길이가 9, 세로의 길이가 3인 int형 2차원 배열을 선언하자.
그리고 구구단 중 2단, 3단, 4단을 다음과 같이 저장해보자.
2 4 6 8 10 ...
3 6 9 12 15 ...
4 8 12 16 20 ...
그리고 제대로 입력이 되었는지 확인하기 위한 예제를 작성해보자.
*/

int main(void)
{
	int nndan[3][9];
	for (int i = 0;i < 9;i++)
	{
		nndan[0][i] = 2 * (i + 1);
		nndan[1][i] = 3 * (i + 1);
		nndan[2][i] = 4 * (i + 1);
	}

	for (int i = 0;i < 3;i++)
	{
		printf("%d단 시작! \n", nndan[i][0]);
		for (int j = 0; j < 9;j++)
			printf("%d x %d = %d \n", nndan[i][0], j + 1, nndan[i][j]);
		printf("\n");
	}

	return 0;
}