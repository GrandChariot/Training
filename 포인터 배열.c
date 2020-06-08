#include <stdio.h>

/*
이름에서부터 쉽게 알 수 있다시피
포인터 배열은 원소가 포인터인 배열이다.
*/

int main(void)
{
	int* arr[20]; // 이런 식으로 선언할 수 있다.
	char* str[] = { "Hello", "world!", "I", "love", " programming!" };

	/*
	큰따옴표로 묶어서 표현되는 문자열들은
	메모리 공간에 일단 저장된 후 그 주소값이 반환된다.
	(이는 scanf나 printf의 작동 방식과도 밀접한 관련이 있다.)
	아무튼 다른 주소값과 달리 아주 특별한 경우라는 것만 알아두자.
	*/
	
	return 0;

}
