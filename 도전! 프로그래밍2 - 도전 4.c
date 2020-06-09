#include <stdio.h>

/*
���� 4
ȸ��(�Ӹ����)�� ������ ������ �ڷ� ������ ���̰� ���� �ܾ���̴�.
�̿� �츮�� ���ڷ� ���޵Ǵ� ���ܾ ȸ������ �ƴ����� �Ǵ��Ϸ� �Ѵ�.
�̸� �������ϴ� �Լ��� �����ϰ� main �Լ��� �����غ���.
������ ���Ǹ� ���� ��ҹ��ڱ��� ���ƾ� ȸ������ �����ϱ�� �Ѵ�.
*/

int Palindrome(char* str, int length)
{
	length--; // length���� �̽������� �������� �����Ƿ� �ϳ� �����ش�.
	for (int index = 0; index <= length; index++, length--) // �ݺ� ���ǿ� �ָ�����!
	{
		if (str[index] != str[length])
			return 0;
	}
	return 1;
}

int main(void)
{
	char word[30];
	printf("���ܾ �Է����ּ���: ");
	scanf("%s", word);
	
	int length;
	for (int i = 0;i < 30;i++)
		if (word[i] == 0)
			length = i; // �̽������� �������� �̿��� �ܾ��� ���̸� ���ϴ� ������ ����...

	if (Palindrome(word, length) == 1)
		printf("�� �ܾ�� ȸ���Դϴ�. \n");
	else
		printf("�� �ܾ�� ȸ���� �ƴմϴ�. \n");

	return 0;
}