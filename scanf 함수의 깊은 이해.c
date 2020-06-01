#include <stdio.h>

int main(void)
{
	/*
	scanf 함수도 printf 함수와 마찬가지로 서식문자로 입력 형식을 지정한다.
	어떤 걸 받아들여서, 어디에 저장할까?
	*/

	int num1, num2, num3;
	printf("세 개의 정수를 입력해주세요: ");
	scanf("%d %o %x", &num1, &num2, &num3);
	
	printf("각각 10진수로 %d, %d, %d입니다. \n", num1, num2, num3); // 전부 10을 넣으면 10, 8, 16이 된다.

	float num4;
	double num5;
	long double num6;
	printf("세 개의 실수를 입력해주세요: ");
	scanf("%f %lf %Lf", &num4, &num5, &num6); // double은 %lf로 받는다는 점에 주의한다.
	printf("각각 %f, %f, %Lf입니다.", num4, num5, num6); // 하지만 출력은 %f로도 된다.

	/*
	문자열의 경우엔 출력 때외 마찬가지로 %s를 쓴다는 사실만 기억해두자.
	그 외에는 배열을 배운 이후에 공부하기로 한다.
	*/

	return 0;
}