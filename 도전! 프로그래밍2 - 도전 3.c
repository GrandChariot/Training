#include <stdio.h>

/*
도전 3
길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받는다.
단, 입력 받은 숫자가 홀수이면 배열의 앞에서부터 채워나가고
짝수이면 뒤에서부터 채워나가는 혀식을 취하기로 하자.
따라서 사용자가 [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]을 입력했다면
결과는 [1, 3, 5, 7, 9, 10, 8, 6, 4, 2]로 저장되어야 한다.
*/

int main(void)
{
	int num, numodd = 0, numeven = 0;
	int arr[10], evenarr[10];
	for (int i = 0;i < 10;i++)
	{
		printf("정수를 입력해주세요: ");
		scanf("%d", &num);
		if (num % 2 == 1)
		{
			arr[numodd] = num;
			numodd++;
		}
		else
		{
			evenarr[numeven] = num;
			numeven++;
		}
	}
	for (numeven;numeven > 0;numeven--, numodd++)
		arr[numodd] = evenarr[numeven-1];

	for (int i = 0; i < numodd;i++)
		printf("%d ", arr[i]);
	printf("\n"); // 사실 개수가 정해져있으므로 더 쉬운 방법도 있을 것 같다.
		
	return 0;
}