#include <stdio.h>

/*
���� 2
���� 1�� ���������� ������ �ڵ带 �а�
???�� �� ������ �����͸� �����غ���.
*/

void SimpleFuncOne(int* arr1, int* arr2)
{
	return;
}

void SimpleFucTwo(int(*arr1)[4], int(*arr2)[4])
{
	return;
}

int main(void)
{
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];
	SimpleFuncOne(arr1, arr1);
	SimpleFucTwo(arr3, arr4);

	return 0;
}