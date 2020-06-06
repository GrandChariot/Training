#include <stdio.h>

/*
���� 3
���ڷ� ���޵� ����ŭ�� �Ǻ���ġ ������ ����ϴ� �Լ��� ������.
���� �� ���α׷� ����ڰ� 5�� �Է��ϸ� 0�������� �����ؼ� �� 5���� ����ؾ� �Ѵ�.
*/

void fibonacci(int num)
{
	int prev1 = 0, prev2 = 1;
	if (num == 0)
		return;
	printf("%d ", prev1);
	if (num == 1)
		return;
	printf("%d ", prev2);
	for (int index = 2; index < num;index++)
	{
		int next = prev1 + prev2;
		printf("%d ", next);
		prev1 = prev2, prev2 = next;
	}
	printf("\n");
	return;
}

int main(void)
{
	int num;
	printf("���� �ƴ� ������ �Է����ּ���: ");
	scanf("%d", &num);
	fibonacci(num);

	return 0;
}