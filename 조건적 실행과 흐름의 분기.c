#include <stdio.h>

int main(void)
{
	/*
	if ~ if else ~ else���� ���ؼ��� �ʹ��� �� �˰� �ֱ� ������ �� ������ �����Ѵ�.
	python�� �� ������ ������ �����ϴ�.
	if else��� �ص�, if ~ else���� ������ ��ø��Ų �� ���̴�.
	*/

	int num;
	scanf("%d", &num);
	if (num > 0)
	{
		printf("%d�� 0���� Ů�ϴ�. \n", num);
	}
	else if (num == 0)
	{
		printf("%d�� 0�Դϴ�. \n", num);
	}
	else
	{
		printf("%d�� 0���� �۽��ϴ�. \n", num);
	}

	/*
	python������ �����غ��� ���� ��������, ���� �����ڰ� �ִ�.
	�ǿ����ڸ� 3�� �޴� Ư���� �������̸�, ?�� :�� �� ���� �� ��Ʈ�̴�.
	R������ ifelse �Լ��� �����ϸ� ����.
	*/

	int num1, num2, num3;
	printf("������ �� �� �Է����ּ���: ");
	scanf("%d %d", &num1, &num2);
	num3 = num1 > num2 ? num1 : num2;
	printf("�� ū ���� %d�Դϴ�. \n", num3); // if~else������ ���δ� �����ϰ�!

	return 0;
}