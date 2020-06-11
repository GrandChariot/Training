#include <stdio.h>

/*
scanf는 문자열을 입력받는데에 한계가 있다.
왜냐하면, 공백을 기준으로 구분하기 때문이다.
이를 보완하기 위한 문자열 출력 함수에는 puts와 fputs가 있다.
앞에서와 마찬가지로 fputs는 출력 위치 지정이 가능하다.
*/

int main(void)
{
	puts("Hello, world!"); // 자동으로 개행이 된다!
	fputs("Hello, world! \n", stdout); // 개행이 안 된다.

	char str[5];
	fgets(str, sizeof(str), stdin);
	puts(str); // 4글자까지만 출력되는데, 이는 널 문자에 한 칸을 소모하기 때문이다.

	/*
	fgets에 대해 좀 더 면밀하게 알아보자.
	예를 들어, 내가 "Hello world!"를 입력하고 엔터를 눌렀다고 해보자.
	fgets 함수는 엔터(\n)를 만나기 전까지를 인식한다.
	또한 엔터 역시 >>포함시켜서<< 인식한다.
	
	H e l l o 공백 w o r l d ! \n \0
	이렇게 14개의 공간이 필요한 것이다.
	*/

	return 0;

}