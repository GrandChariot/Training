#include <stdio.h>

/*
문제 1에서는 포인터 별수에 저장된 값을 변경시켰다.
그런데 이번에는 ptr에 대한 덧셈연산으로 해보기로 한다.
결과는 전 문제와 똑같이 나오면 된다.
*/

int main(void)
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	for (int i = 0; i < 5;i++)
	{
		*(ptr + i) += 2;
		printf("%d ", arr[i]); // 마찬가지로 무사히 3, 4, 5, 6, 7이 출력됐다.
	}

	printf("\n");
	return 0;

}