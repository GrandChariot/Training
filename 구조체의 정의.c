#include <stdio.h>
#include <string.h>

/*
���ڿ� ������ '������ �̸�'�� ���ڿ� ������ '�ֹε�Ϲ�ȣ'
�׸��� ���� ������ '�޿�����'�� ������ �� �ִ�
employee��� �̸��� ����ü�� �����غ���.

�׸��� employee ����ü ������ �ϳ� ������ ����
���α׷� ����ڰ� �Է��ϴ� ������ �� ������ ä����.
���������� ����ü ������ ä���� �����͸� ����غ���.
*/

struct employee
{
	char name[20];
	char code[15];
	int money;
};

int main(void)
{
	struct employee ep1;
	printf("�̸��� �Է����ּ���: ");
	gets(ep1.name);
	printf("�ֹε�Ϲ�ȣ�� �Է����ּ���('-' ����): ");
	gets(ep1.code);
	printf("�޿��� �Է����ּ���(���� ����): ");
	scanf("%d", &ep1.money);

	printf("�̸�: %s \n", ep1.name);
	printf("�ֹε�Ϲ�ȣ: %s \n", ep1.code);
	printf("�޿�: %d�� \n", ep1.money);

	return 0;
}