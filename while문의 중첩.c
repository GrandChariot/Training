#include <stdio.h>

int main(void)
{
	/*
	문제 1
	프로그램 사용자로부터 총 5개의 정수를 입력받아 합을 작성하자.
	단! 정수는 반드시 1 이상이어야 한다.
	만약에 1 미만의 수가 입력되는 경우에는 재입력을 요구해야 한다.
	*/

	int cnt = 0, sum = 0, num;
	while(cnt < 5)
	{
		num = 0;
		while (num == 0) // 0이 입력되면 탈출할 수 없다!
		{
			printf("%d번째 정수를 입력해주세요: ", cnt + 1);
			scanf("%d", &num);
		}

		sum = sum + num;
		cnt++;

	}

	printf("총합은 %d입니다. \n", sum);

	/*
	문제 2
	아래의 출력을 보이는 프로그램을 작성해보자
	총 5행에 걸쳐 출력이 이루어지고, 행이 더해질 때마다 o의 숫자가 증가한다.
	*/

	cnt = 0;
	while (cnt < 5)
	{
		num = 0;
		while (num < cnt)
		{
			printf("o ");
			num++;
		}
		printf("* \n");
		cnt++;
	}

	return 0;
}