#include <stdio.h>

/*
덧셈 프로그램
변수 두 개에 숫자를 저장하고 두 숫자를 더한 값을 다양한 방식으로 출력한다.
*/

int main(void)
{
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("덧셈 결과: %d \n", result);
	printf("%d + %d = %d \n", num1, num2, result);
	printf("%d 더하기 %d는 %d입니다. \n", num1, num2, result);

	return 0;
}