#include <stdio.h>

int main(void)
{
	/*
	문제 1
	프로그램 사용자로부터 양의 정수를 하나 입력 받아서,
	그 수만큼 "Hello world!"를 출력하는 프로그램을 작성해보자.
	*/

	int num = 0, num1;
	printf("양의 정수를 입력해주세요: ");
	scanf("%d", &num1);
	while (num < num1)
	{
		printf("Hello world! \n");
		num++;
	}

	/*
	문제 2
	프로그램 사용자로부터 양의 정수를 하나 입력 받은 다음,
	그 수만큼 3의 배수를 출력하는 프로그램을 작성해보자.
	편의상 아까 입력받은 정수로 하겠다. */

	num = 1;
	while (num <= num1)
	{
		printf("%d ", 3 * num++);
	}
	printf("\n");

	/*
	문제 3
	프로그램 사용자로부터 계속해서 정수를 입력 받는다.
	그리고 그 값을 계속해서 더해 나간다.
	이러한 작업은 프로그램 사용자가 0을 입력할 때까지 계속되어야 하며,
	0이 입력되면 입력된 모든 정수의 합을 입력하고 프로그램을 종료시킨다.
	break를 쓰지 말고 하도록 노력해보자.
	*/

	num = 1;
	int sum = 0;
	while (num)
	{
		printf("정수를 입력해주세요: ");
		scanf("%d", &num);
		sum = sum + num;
	}
	printf("합은 %d입니다. \n", sum);

	/*
	문제 4
	프로그램 사용자로부터 입력받은 숫자에 해당하는 구구단을 출력하되,
	역순으로 출력하는 프로그램을 작성해보자.
	*/

	printf("9까지의 자연수 중 하나를 입력해주세요: ");
	scanf("%d", &num);
	num1 = 9;
	printf("구구단 %d단을 거꾸로 출력합니다! \n", num);
	while (num1 > 0)
	{
		printf("%d x %d = %d \n", num, num1, num * num1);
		num1--;
	}

	/*
	문제 5
	프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성하되
	다음 두 가지 조건을 만족시켜야 한다.
	1. 먼저 몇 개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다.
	2. 그리고 그 수만큼 정수를 입력 받는다.
	3. 평균 값은 소수점 이하까지 계산해서 출력한다.
	for문을 쓰지 않도록 주의하자.
	*/

	sum = 0;
	printf("몇 개의 정수를 입력하시겠습니까?: ");
	scanf("%d", &num);
	num1 = 0;
	int newnum = 0;
	while(num1 < num)
	{
		printf("정수를 입력해주세요: ");
		scanf("%d", &newnum);
		sum = sum + newnum;
		num1++;
	}
	printf("평균은 %f입니다. \n", (double)sum / num);

	return 0;

}