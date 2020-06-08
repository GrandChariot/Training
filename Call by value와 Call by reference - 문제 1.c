#include <stdio.h>

/*
���� 1
���� num�� ����� ���� ������ ����ϴ� �Լ��� �����ϰ�
�̸� ȣ���ϴ� main �Լ��� �ۼ��غ���.
��, �� ���� ������� �ۼ��ؾ��Ѵ�.
Call-by-value ����� SquareByValue �Լ�
Call-by-reference ����� SquareByReference �Լ�
���ڴ� �������� �����ϰ�, ���ڴ� ������ �����ؾ� �Ѵ�.
*/

double SquareByValue(double num)
{
	return num * num;
}

void SquareByReference(double* ptr)
{
	*ptr = (*ptr) * (*ptr);
	return;
}

int main(void)
{
	double num;
	printf("���ڸ� �Է����ּ���: ");
	scanf("%lf", &num);
	printf("������ ���� %f�Դϴ�. \n", SquareByValue(num));
	SquareByReference(&num);
	printf("���� ���� ������ %f�� ����Ǿ����ϴ�. \n", num);

	return 0;
}