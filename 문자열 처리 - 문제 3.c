#include <stdio.h>
#include <string.h>

/*
���α׷� ����ڷκ��� �̸��� ���̸� �ϳ��� ���ڿ��� �Է� �޴´�.
�̸��� ���� ���̿��� ������ ���ԵǾ�� �Ѵ�.
�� ����� ������ �Է¹޾� �̸��� ���̰� ���� ������ �ٸ����� �Ǵ��غ���.
*/

int main(void)
{

	char human1[50], human2[50];
	printf("��� 1�� �̸��� ���̸� �Է����ּ���: ");
	gets(human1);
	printf("��� 2�� �̸��� ���̸� �Է����ּ���: ");
	gets(human2);

	int length1 = 0, length2 = 0, namesame, agesame, digit1 = 0, digit2 = 0;
	for (int i = 0; i < strlen(human1); i++)
		if (human1[i] == 32)
		{
			length1 = i;
			digit1 = strlen(human1) - i;
			break;
		}
	for (int i = 0; i < strlen(human2); i++)
		if (human2[i] == 32)
		{
			length2 = i;
			digit2 = strlen(human2) - i;
			break;
		}

	if (length1 == length2)
		namesame = strncmp(human1, human2, length1);
	else
		namesame = 1;

	if (digit1 == digit2) // �ڸ����� ���̳��� �̻��� ���� �д� �� ����
	{
		for (length1;length1 < strlen(human1);length1++, length2++)
		{
			if (human1[length1] != human2[length2])
			{
				agesame = 1;
				goto end;
			}
		}
		agesame = 0;
	}
	else
		agesame = 1;
end:
	
	if (namesame == 0)
		printf("�̸��� �����ϴ�. \n");
	else
		printf("�̸��� �ٸ��ϴ�. \n");

	if (agesame == 0)
		printf("���̰� �����ϴ�. \n");
	else
		printf("���̰� �ٸ��ϴ�. \n");

	return 0;

	// �̷��� Ǫ�� �� �´���, �������� ���...
	// �ϴ� ���� �ſ� �� ���´�.
}