#include <stdio.h>

/*
여기까지 왔으면 의문이 생길 법도 하다
int main(void)는 무엇인가?
void 말고 다른 무언가가 들어갈 수도 있나?
정답은 가능하다.
우선 예시 코드를 보면서 생각해보자.
*/

int main(int argc, char* argv[]) // int 하나와 char형 포인터 배열 하나를 받는다.
{
	int i = 0;
	printf("전달된 문자열의 수: %d \n", argc);

	for (i = 0;i < argc;i++)
		printf("%d번째 문자열: %s \n", i + 1, argv[i]);
		// 그런데 char형 포인터는 하나의 string이기 때문에 단어 단위로 출력된다!!
	return 0;
}

/*
이렇게 만든 exe 파일을 cmd를 이용해서 실행하면
실행 과정에서 삽입한 문자열이 프로그램에 영향을 끼친다!
*/