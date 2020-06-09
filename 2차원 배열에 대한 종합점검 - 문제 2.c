#include <stdio.h>

/*
문제 2
문제 1과 마찬가지로 교재의 코드를 읽고
???에 들어갈 적절한 포인터를 삽입해보자.
*/

void SimpleFuncOne(int* arr1, int* arr2)
{
	return;
}

void SimpleFucTwo(int(*arr1)[4], int(*arr2)[4])
{
	return;
}

int main(void)
{
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];
	SimpleFuncOne(arr1, arr1);
	SimpleFucTwo(arr3, arr4);

	return 0;
}