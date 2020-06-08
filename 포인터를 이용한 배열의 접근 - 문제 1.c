#include <stdio.h>

/*
문제 1
길이가 5인 int형 배열 arr을 선언하자.
이를 {1, 2, 3, 4, 5}로 초기화한 다음 첫 번째 요소를 가리키는 포인터 ptr을 선언하자.
그 다음 ptr 값을 증가시키는 연산을 통해 모든 배열 요소의 값을 2씩 증가시키고
출력을 통해 증가가 제대로 이루어졌는지 확인하자.
*/

int main(void)
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	for (int i = 0;i < 5;ptr++, i++)
	{
		*ptr += 2;
		printf("%d ", arr[i]); // 성공적으로 3, 4, 5, 6, 7이 출력된다.
	}

	printf("\n");
	return 0;
}
