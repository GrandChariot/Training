#include <stdio.h>

/*
���α׷��� �����ϴ� ���� ����(Random Number)�� �߻����Ѿ� �ϴ� ��찡 ���� �ִ�.
�������� ANSI ǥ�ؿ��� ������ ���� ���� �Լ��� �����ϰ� �ִ�.
�� �Լ��� ������ �̿��Ͽ� 0 �̻� 99 ������ ������ �� 5�� �����ϴ� ���α׷��� ������.
*/

#include <stdlib.h>

int main(void)
{
	int cnt = 0;
	int randoms[5];
	while(cnt < 5)
	{
		int num = rand(); // ���� 0~99������ ���� ������ ��ȯ�� ���� ������ �׷� ������.
		num = num % 100; // �̷��� 0~99������ ���� ���̴�.
		randoms[cnt] = num;
		printf("%d ", num);
		cnt++;
	}

	return 0;
}
