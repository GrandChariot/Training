#include <stdio.h>

/*
함수의 인자로 구조체 변수가 올 수 있다.
구조체 변수의 모든 값이 매개변수에 통째로 복사된다.
포인터를 공유하는 게 아님을 주의하자!
*/

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void ShowPosition(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
	pos.xpos++;
	pos.ypos++;
	return;
}

int main(void)
{
	Point pt1 = { 2, 3 };
	ShowPosition(pt1);
	ShowPosition(pt1); // 당연히 포인트 자체의 값은 변하지 않는다.
	
	/*
	당연하지만, 값 자체를 변하게 하려면
	변수의 포인터를 받아야 한다.
	*/

	/*
	구조체 변수를 대상으로는 거의 대부분의 연산을 할 수 없다.
	그나마 할 수 있는 건 대입연산이나 &연산, sizeof 연산 정도이다.
	구조체끼리 덧셈, 뺄셈을 해봐야 멤버의 덧셈, 뺄셈은 이루어지지 않는다.
	구조체끼리의 연산을 하려면 그런 함수를 직접 만들어줘야 한다.
	*/

	return 0;
}