#include <stdio.h>

int main(void)
{
	/*
	scanf �Լ��� printf �Լ��� ���������� ���Ĺ��ڷ� �Է� ������ �����Ѵ�.
	� �� �޾Ƶ鿩��, ��� �����ұ�?
	*/

	int num1, num2, num3;
	printf("�� ���� ������ �Է����ּ���: ");
	scanf("%d %o %x", &num1, &num2, &num3);
	
	printf("���� 10������ %d, %d, %d�Դϴ�. \n", num1, num2, num3); // ���� 10�� ������ 10, 8, 16�� �ȴ�.

	float num4;
	double num5;
	long double num6;
	printf("�� ���� �Ǽ��� �Է����ּ���: ");
	scanf("%f %lf %Lf", &num4, &num5, &num6); // double�� %lf�� �޴´ٴ� ���� �����Ѵ�.
	printf("���� %f, %f, %Lf�Դϴ�.", num4, num5, num6); // ������ ����� %f�ε� �ȴ�.

	/*
	���ڿ��� ��쿣 ��� ���� ���������� %s�� ���ٴ� ��Ǹ� ����ص���.
	�� �ܿ��� �迭�� ��� ���Ŀ� �����ϱ�� �Ѵ�.
	*/

	return 0;
}