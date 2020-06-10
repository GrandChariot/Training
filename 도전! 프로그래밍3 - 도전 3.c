#include <stdio.h>

/*
프로그램을 구현하다 보면 난수(Random Number)를 발생시켜야 하는 경우가 종종 있다.
다행히도 ANSI 표준에서 다음과 같은 난수 함수를 제공하고 있다.
이 함수를 적절히 이용하여 0 이상 99 이하의 난수를 총 5개 생성하는 프로그램을 만들어보자.
*/

#include <stdlib.h>

int main(void)
{
	int cnt = 0;
	int randoms[5];
	while(cnt < 5)
	{
		int num = rand(); // 물론 0~99까지가 나올 때까지 소환할 수도 있지만 그럼 느리다.
		num = num % 100; // 이러면 0~99까지만 나올 것이다.
		randoms[cnt] = num;
		printf("%d ", num);
		cnt++;
	}

	return 0;
}
