#include <stdio.h>
#include <math.h>

/*
C�� ��ü ���� �� �ƴ϶� Ŭ������ ����.
�� ��� �ڽŸ��� �ڷ����� ����� ����ü(��Ʈ����)�� �����Ѵ�.
���ݱ����� ���� �� Ŭ������ ������ ���ڴ� ������ ����� ���̴�.
��Ʈ���ĸ� ���� �� �κ��� �Ϻ� �ؼ� �����ϴ�.
*/

struct point
{
	int xpos;
	int ypos; // x��ǥ, y��ǥ�� �̷���� ��Ʈ���� �����
} p3, p4, p5; // ����ü�� ����� ���ÿ� ���� �����ϱ�! �� ������ �ʴ´�.

struct personal_data
{
	char name[20];
	int age;
};

int main(void)
{
	struct point p1, p2; // �տ� struct�� �߰��ϸ� ������ ������ �� �ִ�.
	p1.xpos = 5; 
	p1.ypos = 5; // ��° �ͼ��� ����̴�...

	// �� ��Ʈ���ĸ� �̿��ؼ� �� ���� �Ÿ��� �Է¹޾� ����غ���!

	double distance = 0;
	printf("ù ��° ���� ��ǥ�� �Է����ּ���: ");
	scanf("%d %d", &p1.xpos, &p1.ypos);
	printf("�� ��° ���� ��ǥ�� �Է����ּ���: ");
	scanf("%d %d", &p2.xpos, &p2.ypos);

	distance = sqrt(((double)p1.xpos - p2.xpos) * ((double)p1.xpos - p2.xpos) + ((double)p1.ypos - p2.ypos) * ((double)p1.ypos - p2.ypos));
	printf("�� ���� �Ÿ��� %f�Դϴ�. \n", distance);

	struct point p6 = { 20, 20 }; // ����� ���ÿ� �ʱ�ȭ�� �����ϴ�.
	
	/*
	����, ����ü�� ���� ��ҿ� ��Ʈ���� �ִ���
	����� ���ÿ� ����ϰ� �ʱ�ȭ�� �� �ִ�.
	���� ����ü�� �����ϰ�, ��Ʈ���� ���� �������� strcpy�� ����Ѵٰ� �Ѵ�.
	�����ؼ��� �Ʒ� ���ø� ���캸��.
	*/

	struct personal_data JY;
	strcpy(JY.name, "���翬"); // strcpy ���� �̹� ������ ��Ʈ���� �ǵ帱 �� ����;
	struct personal_data JY2 = { "���翬", 25 }; // ���� �ڷḦ �� �� �ִ�!

	return 0;
}