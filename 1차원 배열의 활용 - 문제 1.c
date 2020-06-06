#include <stdio.h>

/*
문제 1
길이가 5인 int형 배열을 선언한 후 총 5개의 정수를 입력받자.
입력이 끝나면 그 중 최댓값, 최솟값과 총합을 입력하자.
단, 입력을 완료한 상태에서 배열을 대상으로 구해야 한다.
*/

int main(void)
{
	int list[5];
	printf("5개의 정수를 입력해주세요: ");
	scanf("%d %d %d %d %d", &list[0], &list[1], &list[2], &list[3], &list[4]);
	int max = list[0], min = list[0], sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int current = list[i];
		if (current > max)
			max = current;
		if (current < min)
			min = current;
		sum += current;
	}
	
	printf("최대는 %d, 최소는 %d, 합계는 %d입니다. \n", max, min, sum);
	return 0;
}