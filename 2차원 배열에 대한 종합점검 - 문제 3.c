#include <stdio.h>

/*
���� 3
���� �� ������ ���������� ��ĭ ä���������
�̹����� �ణ�� ������� ���Ѵ�.
*/

void ComplexFuncOne(int**arr1, int*(*arr2)[5])
{
	return;
}

void ComplexFuncTwo(int***arr1, int***(*arr2)[5]) // �Ʊ� �Ӹ� �θ� �� ���� ���� ���� ����
{
	return;
}
int main(void)
{
	int* arr1[3]; // �̰� ������ �迭
	int* arr2[3][5]; // �̰� ������ 2���� �迭
	int** arr3[5]; // �̰� ���� ������ �迭
	int*** arr4[3][5]; // �̰� Ʈ���� ������ 2���� �迭

	ComplexFuncOne(arr1, arr2);
	ComplexFuncTwo(arr3, arr4);

	return 0;

	/*
	�����, �� ������ ���� ���� ���� ���� �ִ�.
	C�� �ᱹ �����, ��ȣ �Ⱥ��� �о���ٴ� ���̴�.
	���� int*** (*arr2)[5]��
	pointer(*arr2) to 2-d array of triple pointer��� �ؼ��ȴ�.

	1���� �迭�� ������ ��� �������� �ʾƵ� �ȴ�.
	���� �� int* (*arr1)�� ���캸��
	pointer to 1-d array of pointer������, pointer to 1-d array�� ����� �����ʹ�.
	�� �׳� pointer to pointer��. ���� ������...

	2���� �迭�� �� ���� �����ؾ��ϴ� ������, 2���� �迭�� ������
	�׸� ��Ÿ���� �����Ͱ� 'Ư����!' �������̱� �����̴�.
	*/
}