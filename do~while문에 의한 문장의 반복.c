#include <stdio.h>

/*
do~while문 역시 while문과 마찬가지로 반복문이다.
그러나 반복의 조건을 검사하는 시점이 다르다!
영어를 보면 느낌적으로 알겠지만, 일단 하고 검사해라~ 라는 느낌이다.
*/

int main(void)
{
	int num = 0;
	do
	{
		printf("Hello world! \n");
		num++;
	} while (num < 3); // 조건은 괄호가 닫힌 후에 들어간다.

	// do~while로 구구단 만들어보기!

	num = 1;
	do // 우선 무조건 한 번은 실행한다.
	{
		printf("7 x %d = %d \n", num, num * 7);
		num++;
	} while (num <= 9); // 등호를 써주지 않으면 8까지만 하고 끝난다는 차이가 있다.

	/*
	그렇다면 이러한 do~while은 언제 쓰이는가?
	사실 대부분의 경우 while문이 편하다.
	하지만 최소 한 번 이상 실행되어야하는 특수한 경우 do~while이 편하다.
	이전 챕터에서도 그러한 문제가 있었을 것이다!(아마도 중첩 문제 1번)
	*/

	return 0;

}
