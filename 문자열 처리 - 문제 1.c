#include <stdio.h>
#include <string.h>

/*
���� 1
������ ������ ���ڿ��� �Է� ���� ��,
�� �ȿ� �����ϴ� ������ �� ���� ����ؼ� ����ϴ� ���α׷��� �ۼ��غ���.
���� �� ���α׷� ����ڷκ��� �Է� ���� ���ڿ��� "A15#42"�̶� �ϸ�,
�� ���ڿ� �� �ƶ��� ���ڴ� 1, 5, 4, 3�̴�
1+5+4+3�� �������� ��µǾ�� �Ѵ�.
*/

int main(void)
{
	char str[50];
	fgets(str, sizeof(str),stdin);
	int sum = 0;
	for (int i = 0;i < 50;i++)
	{
		if (str[i] == 0)
			break;
		if (str[i] >= 48 && str[i] <= 57)
			sum += str[i] - 48;
	}
	printf("%d \n", sum);

	// �ǿܷ� atoi�� �� ���� ������...

	return 0;
}