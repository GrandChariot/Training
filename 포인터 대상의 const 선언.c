#include <stdio.h>

/*
포인터 변수에 const 선언을 하는 방법은 두 가지가 있다
그 두 가지는 완전히 효과가 다르다는 것에 주의 또 주의하자.
*/

int main(void)
{
	int num = 1;
	const int* ptr = &num; // 이러면 해당 주소의 값이 고정된다.
	int num2 = 2;
	int* const ptr2 = &num2; // 이러면 ptr2에 배정될 수 있는 주소가 고정된다.
	int num3 = 3;
	const int* const ptr3 = &num3; // 이러면 주소도, 값도 변경할 수 없다.

	/*
	상수 선언은 별다른 특별한 효과를 제공하는 것은 아니지만
	코드의 안정성을 대폭 높이는 데에 기여한다.
	바꾸지 않을 주소, 바꾸지 않을 값인 게 확실하다면 꼬박꼬박 써주자.
	불의의 상황을 방지할 수 있다.
	*/

	return 0;
}