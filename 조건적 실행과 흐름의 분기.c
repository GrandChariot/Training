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
		printf("%d는 0보다 큽니다.", num);
	}
	else if (num == 0)
	{
		printf("%d는 0입니다.", num);
	}
	else
	{
		printf("%d는 0보다 작습니다.", num);
	}
	return 0;
}