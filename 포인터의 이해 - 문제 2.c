#include <stdio.h>

/*
문제 2
int형 변수 num1과 num2를 선언과 동시에 각각 10과 20으로 초기화하자.
int형 포인터 변수 ptr1과 ptr2를 선언하여 각각 num1과 num2을 가리키게 하자.
이 상태에서 포인터 변수를 이용하여 num1을 10 증가, num2를 10 감소시키자.
그리고 두 포인터 변수가 가리키는 주소를 서로 바꾸자.
마지막으로 두 포인터가 가리키는 주소의 값을 출력하자.
*/

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1, *ptr2 = &num2;
	(*ptr1) += 10;
	(*ptr2) -= 10;
	ptr1 = &num2, ptr1 = &num1;
	printf("ptr1은 %d를, ptr2는 %d를 가리킵니다. \n", *ptr1, *ptr2);

	return 0;

}