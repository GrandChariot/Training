#include <stdio.h>

int main(void)
{
	/*
	반복문이 무엇인지에 대해서는 python에서 충분히 사용해봤으므로 생략한다.
	반복문에는 while문, do-while문, for문이 있다.
	python에는 없는 do~while의 존재에 대해선 신경써서 공부하도록 하자.
	*/

	/*
	while문
	while문은 특정 조건이 만족하는 동안 계속해서 반복된다.
	어떤 형식인지 예시를 한 번 써보자.
	*/

	int num = 0;
	while (num < 3) // python과 달리 조건은 괄호 안에 넣는다.
	{
		printf("Hello world! %d \n", num); // 그리고 반복할 행위는 중괄호 안에 넣는다.
		num++; // 이 행이 없으면 조건이 계속 만족되어 반복이 무한히 일어난다. 즉 필수적이다.
	}
	
	/*
	사실, 들여쓰기는 꼭 할 필요는 없다.
	하지만 어디까지가 반복문 안쪽인지 표시하기 위해서 사용하는 것이 좋다.
	python의 블록과 비슷한 느낌이다.(물론 블록은 필수다)
	*/

	while (num < 5)
		printf("Hello world! %d \n", num++); // 반복 대상이 하나뿐이면 중괄호 없이 들여쓰기만으로 가능하다.
	
	/*
	그러나, 이는 일부 숏코딩의 케이스에서만 사용할 뿐
	코딩은 기본적으로 헷갈리지 않고 보기 좋은 것이 최고다.
	*/

	// 구구단!
	int num1 = 1;
	while (num1 < 10)
	{
		printf("9 x %d = %d \n", num1, num1 * 9);
		num1++;
	}

	// while문의 중첩을 이용한 진짜 구구단!
	int num2 = 2, num3;
	while (num2 < 10)
	{
		num3 = 1;
		printf("%d단 시작! \n", num2);
		while (num3 < 10)
		{
			printf("%d x %d = %d \n", num2, num3, num2 * num3);
			num3++;
		}
		num2++;
	}

	while (1) // 무한루프. 1은 대표적인 true다. python은 그냥 True 썼었다.
	{
		printf("안녕로봇: 안녕! 안녕! \n");
	}

	return 0;
}