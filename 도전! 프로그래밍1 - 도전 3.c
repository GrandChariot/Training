#include <stdio.h>

/*
두 개의 정수를 입력 받아서 최대공약수(GCM)를 구하는 프로그램을 작성해보자.
*/

int GCM(int m, int n)
{
	/*
	한쪽을 다른 쪽으로 나누어 나머지를 구한 후, 그걸 큰 수 자리에 넣는다.
	그러다 나누어 떨어지면 그 때가 바로 최대공약수다.(유클리드 호제법)
	가령, 36과 24라고 해보자. 36을 24로 나누면 나머지가 12가 된다.
	그리고 둘 중 작은 쪽은 24를 12로 나누면 나누어떨어진다. 이때 12가 최대공약수다.
	*/

	int large, small;
	if (m > n)
	{
		large = m, small = n;
	}
	else
		large = n, small = m;

	while (1)
	{
		int rest = large % small;
		if (rest == 0)
			return small;
		large = small, small = rest;
	}
}

int main(void)
{
	int num1, num2;
	printf("두 개의 자연수를 입력해주세요: ");
	scanf("%d %d", &num1, &num2);
	printf("최대공약수는 %d입니다. \n", GCM(num1, num2));

	return 0;
}