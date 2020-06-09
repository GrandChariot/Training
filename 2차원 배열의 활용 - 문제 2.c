#include <stdio.h>

/*
문제 2
배열 A와 배열 B가 있다.

배열 A
1 2 3 4
5 6 7 8

배열 B
1 5
2 6
3 7
4 8

우선 배열 A를 선언, 초기화한 후
배열 A만을 이용해서 배열 B를 초기화해보자!
*/

int main(void)
{
	int arrA[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};

	int arrB[4][2];
	for (int i = 0;i < 4;i++)
	{
		for (int j = 0; j < 2; j++)
			arrB[i][j] = arrA[j][i];
	}

	for (int i = 0;i < 4;i++)
	{
		for (int j = 0; j < 2; j++)
			printf("%d ", arrB[i][j]);
		printf("\n");
	}

	return 0;

}