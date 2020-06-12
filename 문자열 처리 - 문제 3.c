#include <stdio.h>
#include <string.h>

/*
프로그램 사용자로부터 이름과 나이를 하나의 문자열로 입력 받는다.
이름과 나이 사이에는 공백이 삽입되어야 한다.
두 사람의 정보를 입력받아 이름과 나이가 각각 같은지 다른지를 판단해보자.
*/

int main(void)
{

	char human1[50], human2[50];
	printf("사람 1의 이름과 나이를 입력해주세요: ");
	gets(human1);
	printf("사람 2의 이름과 나이를 입력해주세요: ");
	gets(human2);

	int length1 = 0, length2 = 0, namesame, agesame, digit1 = 0, digit2 = 0;
	for (int i = 0; i < strlen(human1); i++)
		if (human1[i] == 32)
		{
			length1 = i;
			digit1 = strlen(human1) - i;
			break;
		}
	for (int i = 0; i < strlen(human2); i++)
		if (human2[i] == 32)
		{
			length2 = i;
			digit2 = strlen(human2) - i;
			break;
		}

	if (length1 == length2)
		namesame = strncmp(human1, human2, length1);
	else
		namesame = 1;

	if (digit1 == digit2) // 자릿수가 차이나서 이상한 곳을 읽는 것 방지
	{
		for (length1;length1 < strlen(human1);length1++, length2++)
		{
			if (human1[length1] != human2[length2])
			{
				agesame = 1;
				goto end;
			}
		}
		agesame = 0;
	}
	else
		agesame = 1;
end:
	
	if (namesame == 0)
		printf("이름이 같습니다. \n");
	else
		printf("이름이 다릅니다. \n");

	if (agesame == 0)
		printf("나이가 같습니다. \n");
	else
		printf("나이가 다릅니다. \n");

	return 0;

	// 이렇게 푸는 게 맞는지, 모범답안은 어떨지...
	// 일단 답은 매우 잘 나온다.
}