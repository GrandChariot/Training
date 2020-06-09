#include <stdio.h>

/*
도전 4
회문(팰린드롬)은 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어들이다.
이에 우리는 인자로 전달되는 영단어가 회문인지 아닌지를 판단하려 한다.
이를 가능케하는 함수를 정의하고 main 함수로 실행해보자.
구현의 편의를 위해 대소문자까지 같아야 회문으로 인정하기로 한다.
*/

int Palindrome(char* str, int length)
{
	length--; // length에는 이스케이프 시퀀스가 있으므로 하나 내려준다.
	for (int index = 0; index <= length; index++, length--) // 반복 조건에 주목하자!
	{
		if (str[index] != str[length])
			return 0;
	}
	return 1;
}

int main(void)
{
	char word[30];
	printf("영단어를 입력해주세요: ");
	scanf("%s", word);
	
	int length;
	for (int i = 0;i < 30;i++)
		if (word[i] == 0)
			length = i; // 이스케이프 시퀀스를 이용해 단어의 길이를 구하는 복잡한 과정...

	if (Palindrome(word, length) == 1)
		printf("이 단어는 회문입니다. \n");
	else
		printf("이 단어는 회문이 아닙니다. \n");

	return 0;
}