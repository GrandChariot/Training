#include <stdio.h>

/*
이중 포인터, 더블 포인터 변수
** 연산자를 두 개 이어서 선언한다.
*/

void ptrswap(int**, int**);

int main(void)
{
	int num;
	int* ptr = &num;
	int** dptr = &ptr; // 더블 포인터의 선언! 간단하다.

	**dptr = 1; // 이러면 num값이 바뀐다.

	/*
	그러면 대체 이 예시를 어디에 쓰나 볼까?
	ptr1과 ptr2를 선언하고, 각각 &num1과 &num2로 초기화한다.
	그리고 이 둘을 스왑하는 함수를 만들것이다.
	*/

	int num1 = 1, num2 = 2;
	int* ptr1 = &num1, * ptr2 = &num2;
	ptrswap(&ptr1, &ptr2);
	printf("각각이 가리키는 변수의 값은 %d, %d가 되었다. \n", *ptr1, *ptr2);
	(*ptr1) = 5;
	printf("ptr1을 통해 num2를 %d로 변경시킬 수 있었다. \n", num2);

	return 0;

	/*
	int형 배열이 사실상 int형 포인터인 것과 마찬가지로
	포인터 배열은 더블 포인터라는 점도 참조하자.
	*/
}

void ptrswap(int** dptr1, int** dptr2)
{
	int* temp = (*dptr1);
	*dptr1 = *dptr2;
	*dptr2 = temp;
	return;
}