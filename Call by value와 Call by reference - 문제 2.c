#include <stdio.h>

/*
문제 2
세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자.
예를 들어 함수의 이름이 Swap이라면 이렇게 함수를 호출해야 한다.
Swap3(&num1, &num2, &num3);
그리고 함수 호출의 결과로 num1의 값은 num2로, num2의 값은 num3으로
num3의 값은 num1로 이동해야 한다.
*/

void Swap(int* ptr1, int* ptr2, int* ptr3)
{
	int temp = (*ptr1);
	*ptr1 = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = temp;
	return;
}

int main(void)
{
	int num1 = 1, num2 = 2, num3 = 3;
	printf("교체 전: %d %d %d \n", num1, num2, num3);
	Swap(&num1, &num2, &num3);
	printf("교체 후: %d %d %d \n", num1, num2, num3);
	
	return 0;
}