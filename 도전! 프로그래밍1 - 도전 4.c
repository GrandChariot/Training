#include <stdio.h>

/*
���� 4
������ �ݿ����̴�. �׸��� �ָӴϿ��� 5õ���� �ִ�.
DVD �� ���� ������ 3500���� ���´�.
���ۿ� �鷯�� ũ����(500��), �����(700��), �ݶ�(400��)�� ����Ѵ�.
�ܵ��� �ϳ��� ������ �ʰ� �� �� ���� ������ ��� ����� ���� �����϶�.
*/

int main(void)
{	
	int money;
	printf("���� �󸶰� �ִ°�?: ");
	scanf("%d", &money);
	printf("���� ����� �����ϰ� �ִ� �ݾ�: %d \n", money);
	int cream = 1, kkang = 1, cola = 1;
	for(cream=1;cream<money/500;cream++)
	{
		for (kkang = 1;kkang < money / 700;kkang++)
		{
			for(cola=1;cola<money/400;cola++)
				if (cream * 500 + kkang * 700 + cola * 400 == money)
					printf("ũ���� %d��, ����� %d��, �� �� %d�� \n", cream, kkang, cola);
		}
	}

	printf("��� �����Ͻðڽ��ϱ�? \n");

	return 0;

}