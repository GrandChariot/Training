#include <stdio.h>

/*
도전 1
길이가 4 x 4인 int형 2차원 배열을 선언하고
모든 요소를 아래 그림의 왼쪽에 있는 형태와 동일하게 초기화하자.
그리고 배열의 요소들을 오른쪽 방향으로 90도씩 이동시킨 후
그 결과를 출력하는 프로그램을 작성해보자.
*/

void rotate(int(*arr)[4])
{
	int newarr[4][4];
	for (int i = 0;i < 4;i++)
		for (int j = 0;j < 4;j++)
			newarr[j][3-i] = arr[i][j];
	for (int i = 0;i < 4;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			arr[i][j] = newarr[i][j];
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(void)
{
	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	for (int i = 0;i < 4;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	rotate(arr);
	rotate(arr);
	rotate(arr);

	return 0;
}