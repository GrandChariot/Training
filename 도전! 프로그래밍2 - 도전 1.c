#include <stdio.h>

/*
도전 1
길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받아서
홀수와 짝수를 구분 지어 출력하는 프로그램을 작성해보자.
일단 홀수를 전부 출력한 후 짝수를 출력하도록 하자.
단, 10개의 정수는 main 함수에서 입력 받아야 한다.
또한 배열 내의 홀수만 출력하는 함수, 짝수만 출력하는 함수를 정의해야 한다.
*/

void printodd(const int* arr)
{
	printf("홀수 출력: ");
	int flag = 0; // 예시대로 쉼표를 찍어주기 위한 flag
	for (int i = 0;i < 10;i++)
	{
		if (arr[i] % 2 > 0)
		{
			if (flag == 0)
			{
				printf("%d", arr[i]);
				flag = 1; // 첫 홀수가 발견되면 flag는 1이 된다.
			}
			else
				printf(", %d", arr[i]); // 이후로는 쉼표를 붙여준다.
		}
	}
	printf("\n");
	return;
}

void printeven(const int* arr)
{
	printf("짝수 출력: ");
	int flag = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			if (flag == 0)
			{
				printf("%d", arr[i]);
				flag = 1;
			}
			else
				printf(", %d", arr[i]);
		}
	}
	printf("\n");
	return;
}

int main(void)
{
	int arr[10];
	for (int i = 0;i < 10;i++)
	{
		printf("입력: ");
		scanf("%d", arr + i);
	}
	printodd(arr);
	printeven(arr);

	return 0;
}