#include <stdio.h>

/*
Call by value��, �Լ��� ���� ���纻���� �����ϴ� ����̴�.
���ݱ��� �츮�� �׻� ���ؿ� �ͼ��� ����̴�.
�׸��� Call by value��, �����͸� ��� �� ���� �������
���� �ƴ϶� �ּҸ� �����ϴ� ����̴�.
�̸� �����ϰ� �����ϴ� ������ �ٷ� Call by value�� ���
>>> �Լ� ���ο��� ���� ���� �ٲپ �ƹ� �ǹ̵� ���� �����̴�!!! <<<
*/

void swap(int num1, int num2)
{
	int temp = num2;
	num2 = num1;
	num1 = temp;
	return; // �� �Լ��� �ƹ� �ϵ� �Ͼ�� �ʴ´�!
}

void realswap(int* ptr1, int* ptr2)
{
	int temp = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;
	return; // �̰� ����� �۵��Ѵ�!
}


int main(void)
{
	int num1 = 0, num2 = 100;
	printf("num1: %d, num2 = %d \n", num1, num2);
	swap(num1, num2);
	printf("num1: %d, num2 = %d \n", num1, num2);
	realswap(&num1, &num2);
	printf("num1: %d, num2 = %d \n", num1, num2);

	/*
	�׷��ٸ� scanf �Լ��� ���ڰ� �ּ��� ������ �ٷ�!
	�ش� ������ �ּҿ� �����ؾ��ϱ� �����̴�!
	���� �̽��׸��� Ǯ�ȴ�!
	*/

	return 0;
}

