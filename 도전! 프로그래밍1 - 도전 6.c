#include <stdio.h>

/*
���� 6
���α׷� ����ڷκ��� ��(second)�� �Է¹��� ��
�̸� [��, ��, ��]�� ���·� ����ϴ� ���α׷��� �ۼ��غ���.
*/

int main(void)
{
	int second, minute, hour;
	printf("�ʸ� �Է����ּ���: ");
	scanf("%d", &second);

	hour = second / 3600;
	second = second % 3600;
	minute = second / 60;
	second = second % 60;

	printf("%d�ð� %d�� %d�� \n", hour, minute, second);
	return 0;

}