#include <stdio.h>

/*
도전 4
오늘은 금요일이다. 그리고 주머니에는 5천원이 있다.
DVD 한 편을 빌리면 3500원이 남는다.
슈퍼에 들러서 크림빵(500원), 새우깡(700원), 콜라(400원)를 사려한다.
잔돈을 하나도 남기지 않고 이 세 가지 물건을 사는 경우의 수를 제시하라.
*/

int main(void)
{	
	int money;
	printf("현재 얼마가 있는가?: ");
	scanf("%d", &money);
	printf("현재 당신이 소유하고 있는 금액: %d \n", money);
	int cream = 1, kkang = 1, cola = 1;
	for(cream=1;cream<money/500;cream++)
	{
		for (kkang = 1;kkang < money / 700;kkang++)
		{
			for(cola=1;cola<money/400;cola++)
				if (cream * 500 + kkang * 700 + cola * 400 == money)
					printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개 \n", cream, kkang, cola);
		}
	}

	printf("어떻게 구입하시겠습니까? \n");

	return 0;

}