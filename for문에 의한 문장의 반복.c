#include <stdio.h>

int main(void)
{
	/*
	for문
	횟수가 정해져있는 반복문을 while문보다 손쉽게 할 수 있다.
	*/

	int num1 = 0; // num1을 초기화하고
	while (num1 < 3) // num1의 범위를 정하고
	{
		printf("Hello world! \n");
		num1++; // num1을 증가시키는 과정이 사용되었다. 너무 많다.
	}

	for (int num2 = 0; num2 < 3; num2++) // 위의 세 과정을 하나에 몰아넣었다.
	{
		printf("Hello world! \n");
	}

	/*
	그렇다고 for문이 while문의 항상 상위호환인 것은 아니다.
	for문은 반복횟수가 미리 지정되어있을 때만 사용할 수 있기 때문이다.
	용법 자체는 python에서와 완전히 같으므로 자잘한 예제는 생략한다.
	*/

	for (; ; ) // 조건식이나 증감식에 아무 것도 없다면 무한루프가 된다.
	{
		printf("안녕로봇: 안녕! 안녕! \n");
	}

	return 0;

}