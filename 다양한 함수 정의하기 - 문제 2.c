#include <stdio.h>

/*
���� 2
���� �µ��� �Է��ϸ� ȭ�� �µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ��� ������.
����, ȭ�� �µ��� �Է��ϸ� ���� �µ��� ����ϴ� FahToCel�̶�� �Լ��� ������.
�µ���ȯ ������ ������ ����.
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
	printf("���� �µ��� �Է����ּ���: ");
	scanf("%lf", &Cel);
	printf("ȭ���� %f���Դϴ�. \n", CelToFah(Cel));

	printf("ȭ�� �µ��� �Է����ּ���: ");
	scanf("%lf", &Fah);
	printf("������ %f���Դϴ�. \n", FahToCel(Fah));

	return 0;

}