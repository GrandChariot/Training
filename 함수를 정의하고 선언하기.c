#include <stdio.h>

/*
항상 써오던 int main(void)의 정의에 대해 알아보기로 한다.
c는 함수로 시작해서 함수로 끝난다. 그래서 c 프로그램 하나는 main이라는 하나의 함수다.
여기서, int는 반환 형태고, void는 입력 형태다.
함수를 정의할 때에는 반환 형태 함수명(입력 형태)로 만들어주면 된다.
그리고 결과값은 return을 사용하여 반환하면 된다.
void는 반환이나 입력값이 없을 때 입력한다.
그 외의 부분은 python과 동일하다.
*/

int factorial(int num1) // 함수는 main과 별도의 블록에 생성한다.
{
	int result = 1;
	for (int num2 = 1;num2 <= num1;num2++)
	{
		result = result * num2;
	}
	return result;
}

void helloworld(void) // 입력도, 반환도 없는 함수의 예시.
{
	printf("Hello world! \n");
	return;
}

int binomial(int); // 선언만 할 때에는 매개변수의 이름이 생략되어도 괜찮다.

int main(void)
{
	int input;
	scanf("%d", &input);
	printf("%d \n", factorial(input)); // 함수의 정의는 호출보다 먼저 있어야 한다.
	printf("%d \n", binomial(input)); // 정의만 먼저 하면 내용물은 나중에 있어도 상관 없다.

	return 0; // return은 python과 마찬가지로 함수를 빠져나가거나, 값을 반환하는 두 가지 용도로 쓰인다.
}

int binomial(int num1)
{
	return num1 * num1; // 내용물은 나중에 추가하기
}

/*
모든 용법은 python과 동일하므로 어렵지 않게 익힐 수 있었다.
*/
