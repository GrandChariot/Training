#include <stdio.h>

/*
���� ������, ���� ������ ����
** �����ڸ� �� �� �̾ �����Ѵ�.
*/

void ptrswap(int**, int**);

int main(void)
{
	int num;
	int* ptr = &num;
	int** dptr = &ptr; // ���� �������� ����! �����ϴ�.

	**dptr = 1; // �̷��� num���� �ٲ��.

	/*
	�׷��� ��ü �� ���ø� ��� ���� ����?
	ptr1�� ptr2�� �����ϰ�, ���� &num1�� &num2�� �ʱ�ȭ�Ѵ�.
	�׸��� �� ���� �����ϴ� �Լ��� ������̴�.
	*/

	int num1 = 1, num2 = 2;
	int* ptr1 = &num1, * ptr2 = &num2;
	ptrswap(&ptr1, &ptr2);
	printf("������ ����Ű�� ������ ���� %d, %d�� �Ǿ���. \n", *ptr1, *ptr2);
	(*ptr1) = 5;
	printf("ptr1�� ���� num2�� %d�� �����ų �� �־���. \n", num2);

	return 0;

	/*
	int�� �迭�� ��ǻ� int�� �������� �Ͱ� ����������
	������ �迭�� ���� �����Ͷ�� ���� ��������.
	*/
}

void ptrswap(int** dptr1, int** dptr2)
{
	int* temp = (*dptr1);
	*dptr1 = *dptr2;
	*dptr2 = temp;
	return;
}