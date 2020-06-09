#include <stdio.h>

/*
문제 3
앞의 두 문제와 마찬가지로 빈칸 채우기이지만
이번에는 약간의 응용력을 요한다.
*/

void ComplexFuncOne(int**arr1, int*(*arr2)[5])
{
	return;
}

void ComplexFuncTwo(int***arr1, int***(*arr2)[5]) // 아까 머리 싸맨 걸 통해 쉽게 유추 가능
{
	return;
}
int main(void)
{
	int* arr1[3]; // 이건 포인터 배열
	int* arr2[3][5]; // 이건 포인터 2차원 배열
	int** arr3[5]; // 이건 더블 포인터 배열
	int*** arr4[3][5]; // 이건 트리플 포인터 2차원 배열

	ComplexFuncOne(arr1, arr2);
	ComplexFuncTwo(arr3, arr4);

	return 0;

	/*
	사실은, 이 과정에 대한 아주 좋은 팁이 있다.
	C는 결국 영어라서, 괄호 안부터 읽어나간다는 점이다.
	가령 int*** (*arr2)[5]는
	pointer(*arr2) to 2-d array of triple pointer라고 해석된다.

	1차원 배열일 때에는 깊게 생각하지 않아도 된다.
	예를 들어서 int* (*arr1)을 살펴보자
	pointer to 1-d array of pointer이지만, pointer to 1-d array는 평범한 포인터다.
	즉 그냥 pointer to pointer다. 더블 포인터...

	2차원 배열일 때 깊이 생각해야하는 이유는, 2차원 배열일 때에는
	그를 나타내는 포인터가 '특별한!' 포인터이기 때문이다.
	*/
}