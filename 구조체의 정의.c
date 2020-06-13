#include <stdio.h>
#include <string.h>

/*
문자열 형태의 '종업원 이름'과 문자열 형태의 '주민등록번호'
그리고 정수 형태의 '급여정보'를 저장할 수 있는
employee라는 이름의 구조체를 정의해보자.

그리고 employee 구조체 변수를 하나 선언한 다음
프로그램 사용자가 입력하는 정보로 이 변수를 채우자.
마지막으로 구조체 변수에 채워진 데이터를 출력해보자.
*/

struct employee
{
	char name[20];
	char code[15];
	int money;
};

int main(void)
{
	struct employee ep1;
	printf("이름을 입력해주세요: ");
	gets(ep1.name);
	printf("주민등록번호를 입력해주세요('-' 포함): ");
	gets(ep1.code);
	printf("급여를 입력해주세요(단위 생략): ");
	scanf("%d", &ep1.money);

	printf("이름: %s \n", ep1.name);
	printf("주민등록번호: %s \n", ep1.code);
	printf("급여: %d원 \n", ep1.money);

	return 0;
}