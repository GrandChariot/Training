#include <stdio.h>

int main(void)
{
	/*
	scanf 함수는 python의 input 함수를 생각하면 쉬울 것 같다.
	하지만 그 사용 방식은 조금 다르다.
	*/

	int num = 0;
	scanf_s("%d", &num); // 10진수 정수 형태를 입력 받는다, num에 저장한다.
	printf("%d \n", num);

	/*
	& 연산자는 포인터에서 다시 만나요.
	*/

	/*
	교재에는 scanf를 쓰라고 되어있지만, 이는 사실상 폐기되었다.
	scanf는 지정된 버퍼보다 더 많은 양을 받을 수 있어 오버플로우가 흔히 일어난다.
	때문에 scanf_s로 대체되었다고 한다.
	*/

	int num1 = 0, num2 = 0, num3 = 0;
	scanf_s("%d %d %d", &num1, &num2, &num3); // 한 번에 여러 개의 변수를 입력받으며, 공백 기준으로 분리한다. 파이썬에선 이거 split() 써야하는데...
	printf("%d + %d + %d = %d \n", num1, num2, num3, num1 + num2 + num3);

	return 0;
}