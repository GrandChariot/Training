#include <stdio.h>

/*
�� ���� ������ �Է� �޾Ƽ� �ִ�����(GCM)�� ���ϴ� ���α׷��� �ۼ��غ���.
*/

int GCM(int m, int n)
{
	/*
	������ �ٸ� ������ ������ �������� ���� ��, �װ� ū �� �ڸ��� �ִ´�.
	�׷��� ������ �������� �� ���� �ٷ� �ִ�������.(��Ŭ���� ȣ����)
	����, 36�� 24��� �غ���. 36�� 24�� ������ �������� 12�� �ȴ�.
	�׸��� �� �� ���� ���� 24�� 12�� ������ �����������. �̶� 12�� �ִ�������.
	*/

	int large, small;
	if (m > n)
	{
		large = m, small = n;
	}
	else
		large = n, small = m;

	while (1)
	{
		int rest = large % small;
		if (rest == 0)
			return small;
		large = small, small = rest;
	}
}

int main(void)
{
	int num1, num2;
	printf("�� ���� �ڿ����� �Է����ּ���: ");
	scanf("%d %d", &num1, &num2);
	printf("�ִ������� %d�Դϴ�. \n", GCM(num1, num2));

	return 0;
}