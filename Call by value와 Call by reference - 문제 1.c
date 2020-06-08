#include <stdio.h>

/*
문제 1
변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고
이를 호출하는 main 함수를 작성해보자.
단, 두 가지 방식으로 작성해야한다.
Call-by-value 방식의 SquareByValue 함수
Call-by-reference 방식의 SquareByReference 함수
전자는 제곱값을 리턴하고, 후자는 변수에 저장해야 한다.
*/

double SquareByValue(double num)
{
	return num * num;
}

void SquareByReference(double* ptr)
{
	*ptr = (*ptr) * (*ptr);
	return;
}

int main(void)
{
	double num;
	printf("숫자를 입력해주세요: ");
	scanf("%lf", &num);
	printf("제곱한 값은 %f입니다. \n", SquareByValue(num));
	SquareByReference(&num);
	printf("또한 원래 변수가 %f로 변경되었습니다. \n", num);

	return 0;
}