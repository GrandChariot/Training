#include <stdio.h>

/*
길이가 5인 int형 배열 arr을 선언하고, 이를 {1, 2, 3, 4, 5}로 초기화하자.
이 배열의 마지막 요소를 가리키는 포인터 변수 ptr를 선언하자.
그리고 ptr에 저장된 값을 감소시키는 연산을 통해 모든 배열요소에 접근하여
배열에 저장된 모든 정수를 더하여 그 결과를 출력하는 프로그램을 작성하자.
*/

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr + 4;
	int sum = 0;
	for (int i = 0;i < 5;i++, ptr--)
		sum += *ptr;
	printf("총합은 %d입니다. \n", sum);
	return 0;
}
