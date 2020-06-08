#include <stdio.h>

/*
문제 4
길이가 6인 int형 배열 arr을 선언하고 이를 {1, 2, 3, 4, 5, 6}으로 초기화하자.
배열에 저장한 값의 순서가 6, 5, 4, 3, 2, 1이 되도록 변경해보자.
단, 배열의 앞과 뒤를 가리키는 포인터 변수 두 개를 선언해서 이를 활용해야 한다.
*/

int main(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* ptrfront = arr, * ptrback = arr + 5;
	int temp;
	for (int i = 0;i < 3;i++)
	{
		temp = *ptrfront;
		*ptrfront = *ptrback;
		*ptrback = temp; // 이게 맞나 의아했던 부분인데, 답안에서도 이렇게 더미 데이터를 사용함.
		ptrfront++;
		ptrback--;
	}

	for (int i = 0; i < 6;i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}
