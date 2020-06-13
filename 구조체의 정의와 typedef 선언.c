#include <stdio.h>

/*
자주 쓰이는 구조체를 선언할 때마다 struct를 붙이는 건 너무나도 귀찮다.
다행히도, struct를 생략할 수 있는 좋은 방법이 있다.
그건 바로, 자료형에 새 이름을 부여하는 typedef 선언이다.
*/

typedef int INT; // 이러면 INT도 int가 된다.

struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	INT num;
	INT* ptr; // 이렇게 int와 완전히 똑같은! 활용이 가능하다.
	
	typedef int* ptrint;
	typedef char* str; // 이런 것도 가능하다!

	/*
	이렇게 복잡하고 긴 자료형을 간단히 표현할 수 있고,
	알아보기 쉬운 이름으로 만들 수도 있기 때문에
	실전에서는 굉장히 많이 쓰이는 기술이다.
	*/

	typedef struct point Point;
	Point p1; // 이를 응용 하면 이런식으로!

	return 0;
}

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
} Person; // 이렇게 선언과 동시에 typedef를 쓸 수 있다.

typedef struct
{
	char name[20];
	char phoneNum[20];
	int age;
} Person2; // 이렇게 원래 이름을 짓지 않아도 된다!