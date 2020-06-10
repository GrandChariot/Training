#include <stdio.h>
#include <stdlib.h>

/*
���� ���� �� ������ ������.
����ڷκ��� ���� ���� �� �߿� �ϳ��� �Է� �޴´�.
�׸��� ��ǻ�ʹ� ���� ������ ���ؼ� ���� ���� �� �߿��� �ϳ��� �����ϰ� �ȴ�.
�� ���� ���ؼ� ���ڿ� ���ڸ� �����ִ� ���α׷��� �ۼ��� ����.
��, ���α׷��� ������ ����ڰ� �� ������ ��ӵǾ�� �ϰ�,
�������� ������ ������ ������� ������ֵ��� ����.
*/
int rsp(int player, int com)
{
	if (player - com == 1 || com - player == 2)
		return 0; // ��!
	if (player == com)
		return 1; // ���!
	if (com - player == 1 || player - com == 2)
		return 2; // �̱�!
	else
		return;
}

int main(void)
{
	int win = 0, draw = 0;
	while (1)
	{
		int player, com;
		char* playerstr, *comstr;
		do
		{
			printf("������ 1, ������ 2, ���� 3: ");
			scanf("%d", &player);
		} while (player < 1 || player >3);
		
		if (player == 1)
			playerstr = "����";
		else if (player == 2)
			playerstr = "����";
		else
			playerstr = "��";

		srand((int)time(NULL));
		com = rand() % 3 + 1;
		if (com == 1)
			comstr = "����";
		else if (player == 2)
			comstr = "����";
		else
			comstr = "��";

		int result = rsp(player, com);
		if (result == 0)
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �����ϴ�... \n", playerstr, comstr);
			break;
		}
		else if (result == 1)
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�. \n", playerstr, comstr);
			draw++;
		}
		else
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �̰���ϴ�! \n", playerstr, comstr);
			win++;
		}
	}

	printf("\n������ ���: %d�� %d�� \n", win, draw);

	return 0;
}