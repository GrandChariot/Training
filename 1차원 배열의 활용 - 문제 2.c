#include <stdio.h>

/*
���� 2
char�� 1���� �迭�� ����� ���ÿ� ���� ������ �������� �ʱ�ȭ��Ű��.
"Good time"
�ʱ�ȭ ���Ŀ� ����� ������ ����ϴ� ������ �ۼ��غ���.
���ڿ��ε� �ذ��� �� ������, �켱�� �迭�� �غ���.
*/

int main(void)
{
	char goodtime[9] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };
	for (int i = 0;i < 9;i++)
		printf("%c", goodtime[i]);
	printf("\n");

	return 0;
}
