#include <stdio.h>

int main(void)
{
	char goodmorning[] = "Good morning!"; // 배열에 문자열 넣기
	/*
	그런데, g o o d 공백 m o r n i n g ! 합치면 총 13글자일 텐데
	왜 배열의 길이가 14인 걸까?
	왜냐하면, 문자열의 끝에는 \0라는 특별한 이스케이프 시퀀스가 삽입되기 때문이다.
	이를 '널(null) 문자'라고 부른다.
	*/

	printf("크기: %d \n", sizeof(goodmorning)); // 보다시피 크기는 14다.
	printf("널 문자를 정수형, 문자형으로 출력하면 각각 %d, %c. \n", goodmorning[13], goodmorning[13]);
	/*
	즉, 널 문자의 아스키 코드 값은 0이다
	그리고 이를 출력할 경우 아무 것도 출력되지 않는다.
	공백의 아스키 코드 값은 32인데, 이와 헷갈려선 안 된다.
	*/

	/*
	이를 이용해서 scanf에 문자열을 저장할 수 있다.
	*/

	char str[50];
	printf("문자열을 입력해주세요: ");
	scanf("%s", str); // & 연산자를 사용하지 않는다? 배열일 경우엔 그렇다.
	/*
	이렇게 입력 받은 문자열의 경우에도 마지막에 널 문자가 제대로 들어간다.
	이 널 문자가 사라지면 그냥 문자들의 배열이 된다.
	널 문자는, 문자열들이 어디에서 끝나는지 구분짓기 위해 사용한다.
	아래의 예시를 보면 그 이유를 알 수 있다.
	*/

	printf("%s \n", goodmorning);
	goodmorning[4] = '\0';
	printf("%s \n", goodmorning); // 임의로 널 문자를 삽입하니 'Good'까지만 출력된다.

	printf("%s \n", str); // Hello까지만 출력된다. 왜냐하면 printf는 공백을 간격으로 서로 다른 변수로 인식한다.
	/*
	이 때문에 printf 함수는 문자열을 입력받기에는 적절하지 않다.
	*/

	return 0;

}