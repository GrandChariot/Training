#include <stdio.h>

int main(void)
{
	/*
	문제 1
	1 이상 100 미만의 정수 중에서 7의 배수와 9의 배수를 출력하는 프로그램을 작성해 보자.
	단! 7의 배수이면서 동시에 9의 배수인 정수는 한 번만 출력해야 한다.
	*/

	for (int num = 1; num < 101; num++)
	{
		if( num%7==0 || num%9==0 )
		{
			printf("%d \n", num);
		}
	}
	
	return 0;

}