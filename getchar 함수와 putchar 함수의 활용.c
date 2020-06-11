#include <stdio.h>

/*
프로그램 사용자로부터 알파벳 문자를 하나 입력 받아서
입력 받은 문자가 대문자면 소문자로 변환,
소문자면 대문자로 변환해서 출력하는 프로그램을 작성하자.
scanf와 printf는 사용 금지!
만약 알파벳이 아닌 것이 입력되었을 경우 오류 메시지를 출력하기로 한다.
*/

int main(void)
{
	int ch = getchar();
	if (ch >= 65 && ch < 91)
	{
		ch += 32;
	}
	else if (ch >= 97 && ch < 123)
	{
		ch -= 32;
	}
	else
	{
		printf("알파벳이 입력되지 않아 프로그램이 종료됩니다. \n");
		return 0;
	}
	
	putchar(ch);

	return 0;
}