#include <stdio.h>

int main(void)
{
	/*
	���� 3
	�л��� ��ü ��������� ���� ������ ����ϴ� ���α׷��� �ۼ�����.
	�л��� ������ 90�� �̻��̸� A, 80�� �̻��̸� B,
	70�� �̻��̸� C, 50�� �̻��̸� D, �� �̸��̸� F��!
	���α׷� ���� �� ������� ����, ����, ������ ������ �Է� �޴´�.
	�׸���� ����� ���� ���� �׿� ������ ������ ����ϸ� �ȴ�.
	*/

	int korean, english, math;
	printf("����, ����, ���� ������ �Է����ּ���: ");
	scanf("%d %d %d", &korean, &english, &math);
	double average = ((double)korean + english + math) / 3;

	if (average > 90)
		printf("����� %f������ A�Դϴ�", average);
	else if (average > 80)
		printf("����� %f������ B�Դϴ�", average);
	else if (average > 70)
		printf("����� %f������ C�Դϴ�", average);
	else if (average > 50)
		printf("����� %f������ D�Դϴ�", average);
	else
		printf("����� %f������ F�Դϴ�!", average);

	return 0;
}