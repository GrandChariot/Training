#include <stdio.h>

int main(void)
{
	/*
	문제 1
	프로그램 사용자로부터 두 개의 정수를 입력 받아서 두 수의 뺄셈과 곱셈의 결과를 출력하는 프로그램을 작성해보자.
	*/

	int num1, num2;
	printf("두 개의 정수를 입력해주세요: ");
	scanf_s("%d %d", &num1, &num2);
	int result1 = num1 - num2, result2 = num1 * num2;
	printf("%d - %d = %d \n", num1, num2, result1), printf("%d x %d = %d \n", num1, num2, result2);

	/*
	문제 2
	프로그램 사용자로부터 세 개의 정수 num1, num2, num3를 순서대로 입력 받는다.
	그 후 다음 연산의 결과를 출력하는 프로그램을 작성해보자.
	2 x 4 + 6 = 14의 형태로 출력해야 한다.
	*/

	printf("세 개의 정수를 하나씩 입력해주세요: ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	int num3;
	scanf_s("%d", & num3);
	int result3 = num1 * num2 + num3;
	printf("%d x %d + %d = %d \n", num1, num2, num3, result3);

	/*
	문제 3
	하나의 정수를 입력 받아서, 그 수의 제곱을 출력하는 프로그램을 작성해보자.
	*/

	printf("제곱을 구할 정수를 입력해주세요: ");
	scanf_s("%d", &num1);
	int result4 = num1 * num1;
	printf("%d^2 = %d \n", num1, result4);

	/*
	문제 4
	입력 받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성해보자.
	*/

	printf("두 개의 정수를 입력해주세요: ");
	scanf_s("%d %d", &num1, &num2);
	int result5 = num1 / num2, result6 = num1 % num2;
	printf("%d를 %d로 나누었을 때의 몫은 %d이고 나머지는 %d입니다. \n", num1, num2, result5, result6);

	/*
	문제 5
	입력 받은 세 개의 정수 num1, num2, num3을 대상으로 다음 연산의 결과를 출력하는 프로그램을 작성해보자.
	(num1 - num2)(num2 + num3)(num3 % num1)
	*/

	printf("세 개의 정수를 입력해주세요: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	int result7 = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("결과는 %d입니다.", result7);

	return 0;

}