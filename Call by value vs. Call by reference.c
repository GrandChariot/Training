#include <stdio.h>

/*
Call by value란, 함수에 값의 복사본만을 전달하는 방식이다.
지금까지 우리가 항상 취해온 익숙한 방식이다.
그리고 Call by value는, 포인터를 배운 후 익힌 방식으로
값이 아니라 주소를 전달하는 방식이다.
이를 엄밀하게 구분하는 이유는 바로 Call by value의 경우
>>> 함수 내부에서 값을 서로 바꾸어도 아무 의미도 없기 때문이다!!! <<<
*/

void swap(int num1, int num2)
{
	int temp = num2;
	num2 = num1;
	num1 = temp;
	return; // 이 함수는 아무 일도 일어나지 않는다!
}

void realswap(int* ptr1, int* ptr2)
{
	int temp = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;
	return; // 이건 제대로 작동한다!
}


int main(void)
{
	int num1 = 0, num2 = 100;
	printf("num1: %d, num2 = %d \n", num1, num2);
	swap(num1, num2);
	printf("num1: %d, num2 = %d \n", num1, num2);
	realswap(&num1, &num2);
	printf("num1: %d, num2 = %d \n", num1, num2);

	/*
	그렇다면 scanf 함수의 인자가 주소인 이유도 바로!
	해당 변수의 주소에 저장해야하기 때문이다!
	드디어 미스테리가 풀렸다!
	*/

	return 0;
}

