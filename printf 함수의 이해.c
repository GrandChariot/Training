#include <stdio.h>

int main(void)
{
	printf("Hello Everybody! \n"); // printf 함수는 첫 번째 인자를 출력한다.
	printf("%d \n", 1234); // 서식문자 %d를 이용한 출력. d는 decimal(10진수)이다.
	printf("%d %d \n", 10, 20); // 여러 개 이용하면 순서대로 적용된다.

	/*
	이하 서식문자를 이용한 다양한 출력의 연습
	%d 이외에는 아직 사용되지 않는다.
	*/

	printf("제 키는 %dcm입니다. \n", 166);
	printf("%d 더하기 %d는 %d입니다. \n", 2, 3, 5);
	printf("안 \n녕 \n하 \n세 \n요 \n");
	
	return 0;
}