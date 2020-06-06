#include <stdio.h>

/*
도전 6
프로그램 사용자로부터 초(second)를 입력받은 후
이를 [시, 분, 초]의 형태로 출력하는 프로그램을 작성해보자.
*/

int main(void)
{
	int second, minute, hour;
	printf("초를 입력해주세요: ");
	scanf("%d", &second);

	hour = second / 3600;
	second = second % 3600;
	minute = second / 60;
	second = second % 60;

	printf("%d시간 %d분 %d초 \n", hour, minute, second);
	return 0;

}