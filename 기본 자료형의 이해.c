#include <stdio.h>

int main(void)
{
	/*
	파이썬과 달리 C에는 같은 int라도 다양한 자료형이 있다.
	가령 같은 int라도 크기에 따라 char, short, int, long 등이 있다.
	그런데 왜 이렇게 다양하게 분류해놓은 걸까?
	*/

	char num1 = 225;
	printf("%d \n", num1); // char는 보통 1바이트로 이렇게 불가능한 값을 입력하면 오버플로우가 일어난다.

	/*
	같은 자료형이라도 컴파일러마다 크기에 서로 다른 제한을 두고 있다.
	그러나 short와 int가 2바이트 이상이며 int는 short보다 같거나 큰 건 모두가 지킨다.
	이렇게 크기에 차등을 둔 이유는 메모리 공간을 효율적으로 활용하기 위해서다.
	세 자릿수밖에 표현할 일이 없는데 long을 쓰면 얼마나 많은 공간이 낭비될까?
	*/
	
	char num2 = 100;
	short num3 = 100;
	int num4 = 100;
	int size2 = sizeof(num2);
	int size3 = sizeof(num3);
	int size4 = sizeof(num4); // 각 자료형의 크기가 헷갈린다면 sizeof 함수를 이용해서 몇 바이트인지 확인할 수 있다.
	printf("%d %d %d \n", size2, size3, size4);	// 같은 정수 100임에도 각각 1, 2, 4가 출력된다.

	char num5 = 50;
	char num6 = 20;
	printf("%d \n", sizeof(num5 + num6)); // char과 char를 더했는데 크기가 4바이트가 나온다. 왜일까?

	/*
	int 자료형은 다른 자료형보다 연산이 빠르기 때문에 가장 널리 쓰인다.
	그래서 자료형을 지정하지 않고 연산을 하면 자동으로 int 자료형으로 변환된다.
	그렇다고 해서 char나 short는 무쓸모인가? 그런 건 아니다.
	연산은 적지만 많은 자료를 메모리에 보관해야할 땐 char나 short가 유용하다.
	*/

	/*
	그렇다면 실수 자료형인 float, double, long double은 어떤가?
	이들은 정밀도에서 차이가 난다.
	예전에는 소수점 6째자리까지 정밀한 float를 사용했다.
	그러나 지금은 소수점 15째자리까지 정밀하고 용량도 괜찮은 double을 주로 사용한다.
	*/

	/*
	자료형 앞에 unsigned가 붙으면 음수는 표현이 불가한 대신, 2배 더 큰 숫자까지 표현할 수 있다.
	부호를 표현하는 자리를 크기 표현에 사용하기 때문이다.
	*/

	unsigned char num7 = 250;
	printf("%d \n", num7); // 무사히 char로는 표현 불가능한 250이 표현된다.
	printf("%d \n", sizeof(num7)); // 그럼에도 불구하고 크기는 1바이트다.

	return 0;
}