#include <stdio.h>

/*
책에 주어진, 전역변수를 활용한 프로그램을 static 변수로 대체해보자.
*/

int AddToTotal(int num)
{
	static total; // 겸사겸사 static 변수는 값을 입력 안하고 초기화해도 그냥 0이 되는 걸 볼 수 있다.
	total += num;
	return total;
}

int main(void)
{
	int num, i;
	for (i = 0;i < 3;i + 1)
	{
		scanf("%d", &num);
		printf("누적: %d \n", AddToTotal(num));
	}

	return 0;
}