#include <stdio.h>
#include <string.h>

/*
문제 1
적당한 길이의 문자열을 입력 받은 후,
그 안에 존재하는 숫자의 총 합을 계산해서 출력하는 프로그램을 작성해보자.
예를 들어서 프로그램 사용자로부터 입력 받은 문자열이 "A15#42"이라 하면,
이 문자열 중 아라비아 숫자는 1, 5, 4, 3이니
1+5+4+3의 연산결과가 출력되어야 한다.
*/

int main(void)
{
	char str[50];
	fgets(str, sizeof(str),stdin);
	int sum = 0;
	for (int i = 0;i < 50;i++)
	{
		if (str[i] == 0)
			break;
		if (str[i] >= 48 && str[i] <= 57)
			sum += str[i] - 48;
	}
	printf("%d \n", sum);

	// 의외로 atoi를 쓸 일은 없었다...

	return 0;
}