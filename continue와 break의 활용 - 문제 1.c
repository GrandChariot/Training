#include <stdio.h>

int main(void)
{
	/*
	문제 1
	구구단을 출력하되 짝수 단(2단, 4단, 6단, 8단)만 출력하도록 하자.
	또한 2단은 2x2까지, 4단은 4x4까지...만 출력되도록 프로그램을 구현해보자.
	이렇게 어수선한 문제를 제시하는 이유는 continue와 break를 사용하기 위해서다.
	가급적 continue와 break를 최대한 활용해보자.
	*/

	int num1 = 2, num2;
	while (num1 < 10)
	{
		num2 = 1;
		while(1)
		{
			printf("%d x %d = %d \n", num1, num2, num1 * num2);
			if (num1 == num2)
				break;
			num2++;
		}

		num1 += 2;
	}

	return 0;
}