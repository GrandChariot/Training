#include <stdio.h>

/*
도전 5
이번에는 정렬 알고리즘을 하나 소개하겠다.
버블소트이므로 생략한다.(하필?)
배열에 저장되어있는 요소들을 내림차순으로 정렬하는 코드를 버블소트로 작성해보자.
함수명은 DesSort로 한다.
또한 main 함수에서 7개의 정수를 입력받아 함수를 통해 정렬해보자.
*/

void DesSort(int* arr, int length)
{
	for (int index = 0;index < length;index++)
		for (int index2 = 0; index2 < length-1 - index;index2++)
		{
			int temp;
			if (arr[index2] < arr[index2 + 1])
			{
				temp = arr[index2];
				arr[index2] = arr[index2 + 1];
				arr[index2 + 1] = temp;
			}
		}
}

int main(void)
{
	int arr[7];
	for (int i = 0;i < 7;i++)
	{
		int num;
		printf("입력: ");
		scanf("%d", &num);
		arr[i] = num;
	}

	DesSort(arr, 7);
	for (int i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}