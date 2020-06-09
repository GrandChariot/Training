#include <stdio.h>

/*
두 개의 int형 포인터 변수와 길이가 5인 int형 배열을 선언한다.
그리고 MaxAndMin이란 이름의 함수를 정의한다.
이를 호출해서 위의 배열과 두 포인터 변수에 대한 정보를 전달하자.
호출이 완료되면, maxPtr에는 가장 큰 값이 저장된 배열요소의 주소 값이,
minPtr에는 가장 작은 값이 저장된 배열요소의 주소 값이 저장되어야 한다.
*/

void MaxAndMin(int** maxDptr, int** minDptr, int* arr)
{
	*maxDptr = &arr[0];
	*minDptr = &arr[0];
	for (int i = 1;i < 5;i++)
	{
		if (arr[i] > * *maxDptr)
			*maxDptr = &arr[i];
		else if (arr[i] < **minDptr)
			*minDptr = &arr[i];
	}

	return 0;
}

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		printf("정수를 입력해주세요: ");
		scanf("%d", &arr[i]);
	}
	MaxAndMin(&maxPtr, &minPtr, arr);

	printf("최댓값은 %d, 최솟값은 %d입니다. \n", *maxPtr, *minPtr);
	return 0;
}