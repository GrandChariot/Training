#include <stdio.h>
#include <string.h>

/*
드디어!
그 string.h의 사용법을 배운다.
마참내!
*/

int main(void)
{
	char str[15] = "Hello, world!";
	printf("%d \n", strlen(str)); // 문자열의 길이를 반환하는 strlen

	/*
	길이는 음수가 될 수 없기 때문에, unsigned int(size_t)가 기본 반환형이나
	int로 표현할 수 있는 최대 길이를 넘기는 일은 없기 때문에 int로 쓴다.
	sizeof와는 완전히 구분되는 건, 널 문자의 위치를 잡아준다는 점이다.
	이런 게 있었으면 이전에 문제를 좀 더 쉽게 풀 수 있었을 텐데.
	*/

	char str2[10];
	strncpy(str2, str, sizeof(str2)); // 문자열을 복사하는 strncpy, strcpy
	
	/*
	str2에 str을 복사하라
	단, 길이가 모자라다면 str2의 길이만큼만.
	(strcpy는 길이를 안 따지고 카피해버린다.)
	
	그런데 여기서 무턱대고 str2를 출력하면 치명적인 문제가 발생한다!
	바로 널 문자가 잘려버렸다는 사실이다...
	그 때문에 마지막 칸에 수동으로 널 문자를 삽입해야 한다.
	*/

	str2[sizeof(str2) - 1] = 0;
	puts(str2); // 성공적인 출력!

	/*
	다음으로, 문자열 뒤에 문자열을 덧붙이는 함수
	strcat이랑 strncat이 있다.
	사용법과 차이점은 위의 복사랑 완전히 동일하다.
	참고로, 널 문자는 다음 문자로 덮어씌워진다!
	*/

	/*
	str1과 str2를 비교하고 싶을 때 사용하는 함수
	strcmp, strncmp가 있다.
	strncmp는 중간 일정 길이까지만 비교한다.
	*/

	/*
	마지막으로 문자열의 내용을 변환하는 함수들이 있다.
	atoi, atol, atof이다.
	int, long, double로 각각 변환해준다.
	매우 유용한 함수다! 언젠가 꼭 다시 찾게 될 것이다.
	*/
	
	return 0;

}