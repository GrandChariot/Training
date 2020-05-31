#include <stdio.h>

int main(void)
{
	/*
	하나의 데이터를 다른 데이터 타입으로 바꿀 수 있는데, 두 가지 방법이 있다.
	자동 형 변환(묵시적 형 변환), 강제 형 변환(명시적 형 변환)
	이름에서부터 어떤 느낌인지 알 수 있으리라고 생각한다!
	*/

	double num1 = 245; // 대입 연산자에서 왼쪽과 오른쪽의 자료형이 다르면, 강제로 왼쪽에 맞춰진다. 즉 245.0이 된다.
	printf("%lf \n", num1);
	int num2 = 3.14; // 그럼 이건 어찌 되는가? 소수점 아래를 잃어버린다... 3이 된다.
	printf("%d \n", num2);
	char num3 = 128; // 이거는? 이거는 좀 자세한 설명이 필요하다.
	printf("%d \n", num3); // 어쩐지 -128이 된 걸 확인할 수 있다.

	/*
	int 자료형의 128은 2진법으로 00000000 00000000 00000000 10000000이다.
	그런데 char에서는 1바이트밖에 쓰지 못하므로 앞이 싹둑 잘리고 10000000만 남는다.
	그리고 이것이 표현하는 건 -128이다.
	이런 현상을 흔히 오버플로우라고 부른다.
	*/

	/*
	정수의 승격
	이외에 또 형 변환이 되는 경우가 있는데, 바로 연산할 때이다.
	정수 연산은 int일 때 가장 빠르다고 했는데, 때문에 연산을 하면 자동으로 int로 바뀐다.
	이를 정수의 승격이라고 한다.
	*/

	short num4 = 20, num5 = 30;
	short num6 = num4 + num5;

	/*
	재밌게도 이 식에선 여러 번의 형 변환이 일어난다.
	우선 연산하기 위해 num4랑 num5를 int로 바꾼 후, 둘을 더한 값을 int로 뱉는다.
	그리고 그 값을 다시 short로 만들어서 num6에 넣는 것이다.
	*/

	/*
	마지막으로 볼 자동 형 변환은 파이썬에서도 많이 겪어본 거다.
	바로 피연산자의 자료형이 서로 다를 때! 서로 다른 자료형끼리는 연산이 불가능하다.
	데이터 손실을 최소화하는 쪽으로 통일된다.
	무조건 실수 자료형이 정수 자료형보다 우선도가 높다.
	*/

	int num7 = 2;
	double num8 = 2.5;
	double num9 = num7 + num8; // 바로 여기서 우선 num7을 double로 변환한 후 연산이 이루어진다.

	/*
	명시적 형 변환은 형 변환 연산자라는 걸 이용한다.
	파이썬에서는 형 변환을 할 때 함수를 이용했는데, 여기서는 연산자를 이용한다.
	*/

	int num10 = 4;
	int num11 = 3;
	double divresult = num10 / num11;
	printf("%f \n", divresult); // 웬걸 double으로 지정했음에도 제대로 된 결과가 아닌 1.0이 나온다.

	/*
	이 현상은 연산을 해야할 두 숫자가 int이므로, 그 결과도 int로 나오기에 일어난다.
	double에 들어가기 전에 이미 int로 소수점 아래가 잘려버리니 제대로 된 결과가 나오지 않는 것.
	이를 해결하기 위해선 이렇게 해야한다.
	*/

	divresult = (double)num10 / num11; // 연산자를 통해 하나를 double로 바꿔주면, 자동 형 변환에 의해 나머지 하나도 double이 된다.
	printf("%f \n", divresult); // 이제 정상적인 결과가 나오는 걸 확인할 수 있다.
	
	/*
	팁! 자동 형 변환이 일어나는 경우에도 명시적으로 표시해주면 덜 헷갈릴 수 있다!
	*/

	return 0;
}