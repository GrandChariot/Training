#include <stdio.h>

/*
���� 2
���α׷��� ����ڷκ��� 10���� ���·� ������ �ϳ� �Է� ���� ����
�̸� 2������ ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��غ���.
*/

void printbinary(int num)
{
	char result[10000];
	int i = 0;
	while (1)
	{
		char temp = num % 2;
		num = num / 2;
		result[i] = temp;
		if (num == 0)
			break;
		i++;
	}
	
	for (i;i >= 0;i--)
		printf("%d", result[i]);
	printf("\n");
}

int main(void)
{
	int num;
	printf("������ �Է����ּ���: ");
	scanf("%d", & num);
	printbinary(num);
	return 0;
}