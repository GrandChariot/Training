#include <stdio.h>

/*
�׻� ����� int main(void)�� ���ǿ� ���� �˾ƺ���� �Ѵ�.
c�� �Լ��� �����ؼ� �Լ��� ������. �׷��� c ���α׷� �ϳ��� main�̶�� �ϳ��� �Լ���.
���⼭, int�� ��ȯ ���°�, void�� �Է� ���´�.
�Լ��� ������ ������ ��ȯ ���� �Լ���(�Է� ����)�� ������ָ� �ȴ�.
�׸��� ������� return�� ����Ͽ� ��ȯ�ϸ� �ȴ�.
void�� ��ȯ�̳� �Է°��� ���� �� �Է��Ѵ�.
�� ���� �κ��� python�� �����ϴ�.
*/

int factorial(int num1) // �Լ��� main�� ������ ��Ͽ� �����Ѵ�.
{
	int result = 1;
	for (int num2 = 1;num2 <= num1;num2++)
	{
		result = result * num2;
	}
	return result;
}

void helloworld(void) // �Էµ�, ��ȯ�� ���� �Լ��� ����.
{
	printf("Hello world! \n");
	return;
}

int binomial(int); // ���� �� ������ �Ű������� �̸��� �����Ǿ ������.

int main(void)
{
	int input;
	scanf("%d", &input);
	printf("%d \n", factorial(input)); // �Լ��� ���Ǵ� ȣ�⺸�� ���� �־�� �Ѵ�.
	printf("%d \n", binomial(input)); // ���Ǹ� ���� �ϸ� ���빰�� ���߿� �־ ��� ����.

	return 0; // return�� python�� ���������� �Լ��� ���������ų�, ���� ��ȯ�ϴ� �� ���� �뵵�� ���δ�.
}

int binomial(int num1)
{
	return num1 * num1; // ���빰�� ���߿� �߰��ϱ�
}

/*
��� ����� python�� �����ϹǷ� ����� �ʰ� ���� �� �־���.
*/
