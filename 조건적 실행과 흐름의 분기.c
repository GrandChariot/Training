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
		printf("%d�� 0���� Ů�ϴ�.", num);
	}
	else if (num == 0)
	{
		printf("%d�� 0�Դϴ�.", num);
	}
	else
	{
		printf("%d�� 0���� �۽��ϴ�.", num);
	}
	return 0;
}