#include <stdio.h>

/*
���� ���̴� ����ü�� ������ ������ struct�� ���̴� �� �ʹ����� ������.
��������, struct�� ������ �� �ִ� ���� ����� �ִ�.
�װ� �ٷ�, �ڷ����� �� �̸��� �ο��ϴ� typedef �����̴�.
*/

typedef int INT; // �̷��� INT�� int�� �ȴ�.

struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	INT num;
	INT* ptr; // �̷��� int�� ������ �Ȱ���! Ȱ���� �����ϴ�.
	
	typedef int* ptrint;
	typedef char* str; // �̷� �͵� �����ϴ�!

	/*
	�̷��� �����ϰ� �� �ڷ����� ������ ǥ���� �� �ְ�,
	�˾ƺ��� ���� �̸����� ���� ���� �ֱ� ������
	���������� ������ ���� ���̴� ����̴�.
	*/

	typedef struct point Point;
	Point p1; // �̸� ���� �ϸ� �̷�������!

	return 0;
}

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
} Person; // �̷��� ����� ���ÿ� typedef�� �� �� �ִ�.

typedef struct
{
	char name[20];
	char phoneNum[20];
	int age;
} Person2; // �̷��� ���� �̸��� ���� �ʾƵ� �ȴ�!