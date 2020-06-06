#include <stdio.h>

/*
문제 2
char형 1차원 배열을 선언과 동시에 다음 문장의 내용으로 초기화시키자.
"Good time"
초기화 이후엔 저장된 내용을 출력하는 예제를 작성해보자.
문자열로도 해결할 수 있지만, 우선은 배열로 해보자.
*/

int main(void)
{
	char goodtime[9] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };
	for (int i = 0;i < 9;i++)
		printf("%c", goodtime[i]);
	printf("\n");

	return 0;
}
