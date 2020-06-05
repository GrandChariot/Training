#include <stdio.h>

int main(void)
{
	/*
	if ~ if else ~ else문에 대해서는 너무나 잘 알고 있기 때문에 긴 설명은 생략한다.
	python과 그 사용법도 완전히 동일하다.
	if else라고 해도, if ~ else문을 여러개 중첩시킨 것 뿐이다.
	*/

	int num;
	scanf("%d", &num);
	if (num > 0)
	{
		printf("%d는 0보다 큽니다. \n", num);
	}
	else if (num == 0)
	{
		printf("%d는 0입니다. \n", num);
	}
	else
	{
		printf("%d는 0보다 작습니다. \n", num);
	}

	/*
	python에서는 경험해보지 못한 개념으로, 조건 연산자가 있다.
	피연산자를 3개 받는 특이한 연산자이며, ?와 :의 두 개가 한 세트이다.
	R에서의 ifelse 함수를 생각하면 좋다.
	*/

	int num1, num2, num3;
	printf("정수를 두 개 입력해주세요: ");
	scanf("%d %d", &num1, &num2);
	num3 = num1 > num2 ? num1 : num2;
	printf("더 큰 것은 %d입니다. \n", num3); // if~else문보다 때로는 간단하게!

	return 0;
}