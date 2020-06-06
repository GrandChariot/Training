#include <stdio.h>

/*
문제 2
섭씨 온도를 입력하면 화씨 온도를 반환하는 CelToFah라는 이름의 함수를 만들자.
또한, 화씨 온도를 입력하면 섭씨 온도로 출력하는 FahToCel이라는 함수도 만들자.
온도변환 공식은 다음과 같다.
Fah = 1.8xCel+32
*/

double CelToFah(double Cel)
{
	return 1.8 * Cel + 32;
}

double FahToCel(double Fah)
{
	return (Fah - 32) / 1.8;
}

int main(void)
{
	double Cel, Fah;
	printf("섭씨 온도를 입력해주세요: ");
	scanf("%lf", &Cel);
	printf("화씨로 %f도입니다. \n", CelToFah(Cel));

	printf("화씨 온도를 입력해주세요: ");
	scanf("%lf", &Fah);
	printf("섭씨로 %f도입니다. \n", FahToCel(Fah));

	return 0;

}