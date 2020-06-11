#include <stdio.h>

/*
문자 출력 함수
putchar, fputc의 두 개의 함수가 있다.
putchar은 단순히, 인자로 전달된 문자를 모니터로 출력하는 함수이다.
근데 fputc의 경우 특징을 하나 가지고 있다.
바로 두 번째 매개변수로 어느 스트림으로 문자를 보낼지 지정할 수 있다.
이 스트림은 모니터 뿐만 아니라 파일도 가능하다.

두 함수 다 정상적인 결과를 보장하지 못할 경우 EOF를 반환한다.
*/

/*
마찬가지로 문자의 입력에는 getchar과 fgetc가 쓰인다.
*/

int main(void)
{
	int ch1, ch2;

	ch1 = getchar(); // 입력을 받는다
	ch2 = fgetc(stdin); // 엔터 키의 입력

	putchar(ch1); // 문자 출력
	fputc(ch2, stdout); // 엔터 키의 출력

	/*
	코드를 보면, 단 한 개의 문자만 입력받는데에도
	입력 함수와 출력 함수는 두 번 쓰는 것을 알 수 있다.
	이는 엔터키를 뜻하는 "\n" 또한 하나의 문자이기 때문이다.

	그런데, getchar과 putchar은 왜 int형 변수를 받는 거지?
	그 전에 EOF에 대한 설명이 필요하다.
	*/

	/*
	EOF는 End Of File로, 파일의 종료를 의미한다.
	잘못된 입출력이 발생하면 EOF가 반환된다! 그 의미를 이젠 알 수 있다.
	또한, EOF의 단축키인 Ctrl+Z, Ctrl+D로도 EOF를 반환시킬 수 있다.
	*/

	while (1)
	{
		int ch = getchar();
		if (ch == EOF)
			break; // Ctrl+Z를 누르면 꺼진다...!!!
		putchar(ch); // 더 신기한 건 문장째로 입력하면 문장째로 출력한다...!!!
	}

	/*
	아무래도 괜찮은 이야기지만,
	EOF는 -1로 정의되어있다.
	그래서 char를 가끔 unsigned char로 사용하는 컴파일러라면
	char로는 에러를 일으킬 수 있기에 getchar, putchar에는 int를 쓴다.
	이러한 문자 입출력 함수들은 scanf, printf보다 훨씬 가볍다!
	*/

	return 0;
}

