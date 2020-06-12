#include <stdio.h>
#include <string.h>

/*
문제 2
교재와 같이 총 3개의 배열을 선언한다.
그리고 프로그램 사용자로부터 문자열을 두 개 입력받는다
이때 반드시 fgets 함수를 사용해야한다.
이어서 str1에 저장된 문자열을 str3에 복사하고
str2에 저장된 문자열을 str3에 저장된 문자 위에 덧붙이자.
마지막으로 str3에 저장된 문자열을 출력하자.
*/

void bufferclear(void)
{
	while (getchar() != '\n');
	return;
}

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];


	fgets(str1, sizeof(str1), stdin);
	if (str1[strlen(str1) - 1] == '\n') // 만약 \n이 있다면 삭제해준다.
		str1[strlen(str1) - 1] = 0;
	else
		bufferclear();

	fgets(str2, sizeof(str2), stdin);
	if (str2[strlen(str2) - 1] == '\n')
		str2[strlen(str2) - 1] = 0;
	else
		bufferclear();

	strcpy(str3, str1);
	strcat(str3, str2);
	puts(str3);

	return 0;

}