#include <stdio.h>

int main(void)
{
	printf("Hello Everybody! \n"); // printf �Լ��� ù ��° ���ڸ� ����Ѵ�.
	printf("%d \n", 1234); // ���Ĺ��� %d�� �̿��� ���. d�� decimal(10����)�̴�.
	printf("%d %d \n", 10, 20); // ���� �� �̿��ϸ� ������� ����ȴ�.

	/*
	���� ���Ĺ��ڸ� �̿��� �پ��� ����� ����
	%d �̿ܿ��� ���� ������ �ʴ´�.
	*/

	printf("�� Ű�� %dcm�Դϴ�. \n", 166);
	printf("%d ���ϱ� %d�� %d�Դϴ�. \n", 2, 3, 5);
	printf("�� \n�� \n�� \n�� \n�� \n");
	
	return 0;
}