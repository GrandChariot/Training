#include <stdio.h>
#include <string.h>

/*
���� 2
����� ���� �� 3���� �迭�� �����Ѵ�.
�׸��� ���α׷� ����ڷκ��� ���ڿ��� �� �� �Է¹޴´�
�̶� �ݵ�� fgets �Լ��� ����ؾ��Ѵ�.
�̾ str1�� ����� ���ڿ��� str3�� �����ϰ�
str2�� ����� ���ڿ��� str3�� ����� ���� ���� ��������.
���������� str3�� ����� ���ڿ��� �������.
*/

void bufferclear(void)
{
	while (getchar() != '\n');
	return;
}

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];


	fgets(str1, sizeof(str1), stdin);
	if (str1[strlen(str1) - 1] == '\n') // ���� \n�� �ִٸ� �������ش�.
		str1[strlen(str1) - 1] = 0;
	else
		bufferclear();

	fgets(str2, sizeof(str2), stdin);
	if (str2[strlen(str2) - 1] == '\n')
		str2[strlen(str2) - 1] = 0;
	else
		bufferclear();

	strcpy(str3, str1);
	strcat(str3, str2);
	puts(str3);

	return 0;

}