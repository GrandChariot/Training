#include <stdio.h>

/*
���� 2
�� ������ ����� ���� ���� �ڹٲٴ� �Լ��� �����غ���.
���� ��� �Լ��� �̸��� Swap�̶�� �̷��� �Լ��� ȣ���ؾ� �Ѵ�.
Swap3(&num1, &num2, &num3);
�׸��� �Լ� ȣ���� ����� num1�� ���� num2��, num2�� ���� num3����
num3�� ���� num1�� �̵��ؾ� �Ѵ�.
*/

void Swap(int* ptr1, int* ptr2, int* ptr3)
{
	int temp = (*ptr1);
	*ptr1 = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = temp;
	return;
}

int main(void)
{
	int num1 = 1, num2 = 2, num3 = 3;
	printf("��ü ��: %d %d %d \n", num1, num2, num3);
	Swap(&num1, &num2, &num3);
	printf("��ü ��: %d %d %d \n", num1, num2, num3);
	
	return 0;
}