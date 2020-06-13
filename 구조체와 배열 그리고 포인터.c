#include <stdio.h>
#include <string.h>

/*
이전 파일에서는 개인정보가 담겨있는 스트럭쳐를 만들었다.
그런데, 여러 명의 개인정보를 저장하려면 스트럭쳐를 담아둘 배열이 필요하다.
구조체 배열은 일반적인 배열과 선언 방식이 동일하다.
*/

struct personal
{
	char name[20];
	int age;
};

void bufferclear(void)
{
	while (getchar() != '\n')
		;
	return 0;
}

struct point
{
	int xpos;
	int ypos;
	struct point* ptr; // 자신의 포인터를 멤버로 둘 수 있다;;
};

int main(void)
{
	struct personal arr[3]; // 간단한 선언 방법!
	for (int i = 0;i < 3;i++)
	{
		printf("이름을 입력해주세요: ");
		gets(arr[i].name);
		
		printf("나이를 입력해주세요: ");
		scanf("%d", &arr[i].age);
		bufferclear();
	}

	printf("이름    나이  \n");
	for (int i = 0;i < 3;i++)
	{
		printf("%-8s %-8d \n", arr[i].name, arr[i].age);
	}

	struct point arr2[2] = {
		{3, 5},
		{2, 4}
	}; // 바로 초기화하는 것 당연히 가능하다! 

	/*
	당연히 포인터 변수도 구조체의 멤버가 될 수 있다.
	그 방식이야 뭐 익숙하지만, 여기에는 아주 특수한 점이 하나 있다.
	
	>> 바로 자기 자신의 포인터를 멤버로 둘 수 있다는 것! <<
	
	이는 매우 중요한 게, 노드를 선언할 때에 반드시 사용될 기술이기 때문이다.
	같은 자료형, 다른 변수의 포인터를 멤버로 둠으로써 두 변수는 연결된다.
	이게 연결 리스트와 트리의 기본이 될 것이다.
	이미 자료구조를 공부했기 때문에 충분히 유추할 수 있는 내용이다.

	이때, 구조체 변수의 포인터 주소는 첫 번째 멤버의 주소로 지정된다.
	*/

	return 0;
}