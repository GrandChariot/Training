#include <stdio.h>
#include <math.h>

/*
C는 객체 지향 언어가 아니라 클래스가 없다.
그 대신 자신만의 자료형을 만드는 구조체(스트럭쳐)가 존재한다.
지금까지도 여러 번 클래스가 있으면 좋겠단 생각이 들었을 것이다.
스트럭쳐를 통해 이 부분을 일부 해소 가능하다.
*/

struct point
{
	int xpos;
	int ypos; // x좌표, y좌표로 이루어진 스트럭쳐 만들기
} p3, p4, p5; // 구조체의 선언과 동시에 변수 선언하기! 잘 쓰이진 않는다.

struct personal_data
{
	char name[20];
	int age;
};

int main(void)
{
	struct point p1, p2; // 앞에 struct만 추가하면 간단히 선언할 수 있다.
	p1.xpos = 5; 
	p1.ypos = 5; // 어째 익숙한 방식이다...

	// 이 스트럭쳐를 이용해서 두 점의 거리를 입력받아 계산해보자!

	double distance = 0;
	printf("첫 번째 점의 좌표를 입력해주세요: ");
	scanf("%d %d", &p1.xpos, &p1.ypos);
	printf("두 번째 점의 좌표를 입력해주세요: ");
	scanf("%d %d", &p2.xpos, &p2.ypos);

	distance = sqrt(((double)p1.xpos - p2.xpos) * ((double)p1.xpos - p2.xpos) + ((double)p1.ypos - p2.ypos) * ((double)p1.ypos - p2.ypos));
	printf("두 점의 거리는 %f입니다. \n", distance);

	struct point p6 = { 20, 20 }; // 선언과 동시에 초기화도 가능하다.
	
	/*
	만약, 구조체의 구성 요소에 스트링이 있더라도
	선언과 동시에 편안하게 초기화할 수 있다.
	원래 구조체를 선언하고, 스트링에 값을 넣으려면 strcpy를 써야한다고 한다.
	관련해서는 아래 예시를 살펴보자.
	*/

	struct personal_data JY;
	strcpy(JY.name, "김재연"); // strcpy 없이 이미 생성된 스트링을 건드릴 수 없다;
	struct personal_data JY2 = { "김재연", 25 }; // 쉽게 자료를 줄 수 있다!

	return 0;
}