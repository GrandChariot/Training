#include <stdio.h>

int main(void)
{
	/*
	문제 2
	다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성해보자.
	AZ + ZA = 99
	가능한 모든 수를 직접 대입해보는 방식이다.
	*/

	int A, Z;
	for (A = 1; A < 10; A++)
	{
		for (Z = 1; Z < 10; Z++)
		{
			if (11 * A + 11 * Z == 99)
			{
				printf("A = %d, Z = %d \n", A, Z);
				break; // 한 A에 대해 Z는 하나 뿐이므로 발견했으면 탈출한다.
			}
		}
	}

	return 0;

}