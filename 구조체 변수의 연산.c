#include <stdio.h>

/*
다음 구조체의 두 변수를 대상으로 저장된 값을 서로 바꿔주는 함수를 정의하고
이를 호출하는 예제를 작성해보자.
*/

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point* ptr1, Point* ptr2)
{
	Point temp;
	temp.xpos = (*ptr1).xpos;
	temp.ypos = (*ptr1).ypos;

	(*ptr1).xpos = (*ptr2).xpos;
	(*ptr1).ypos = (*ptr2).ypos;

	(*ptr2).xpos = temp.xpos;
	(*ptr2).ypos = temp.ypos;
}

int main(void)
{
	Point pt1 = { 1, 2 };
	Point pt2 = { 3, 4 };

	printf("[%d, %d], [%d, %d] \n", pt1.xpos, pt1.ypos, pt2.xpos, pt2.ypos);

	SwapPoint(&pt1, &pt2);

	printf("[%d, %d], [%d, %d] \n", pt1.xpos, pt1.ypos, pt2.xpos, pt2.ypos);
	
	return 0;
}