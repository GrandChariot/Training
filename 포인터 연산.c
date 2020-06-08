#include <stdio.h>

/*
포인터를 대상으로 다양한 연산이 가능하다.
그런데, 연산의 결과가 어떻게 될까?
*/

int main(void)
{
	int num = 1;
	double num2 = 1.0;
	int* intptr = &num;
	double* dbptr = &num2;
	printf("더하기 전 포인터는 각각 %p, %p이다. \n", intptr, dbptr);
	intptr++;
	dbptr++;
	printf("각각에 1을 더해보았더니 %p, %p가 되었다. \n", intptr, dbptr);

	/*
	놀랍게도 int형 포인터는 4가 증가했고, double형 포인터는 8이 증가했다!
	즉, 자료형의 크기만큼 증가하는 것이다.
	이를 배열에 응용할 수 있다.
	*/

	int arr[] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d \n", *ptr); ptr++;

	/*
	마치 포인터가 배열 사이를 돌아다닌다는(?) 느낌을 받을 수 있었다.
	*/

	*(++ptr) = 20;
	*(ptr + 1) = 20; // ++ 연산자에 대해 생각해보면 이 둘의 차이점은 금방 알 수 있다.

	/*
	이제 아주아주 중요한 결론을 내리려 한다.
	바로 배열 이름 arr에 대해, arr[i] = *arr(+i)라는 점이다!!
	이때 ++ 연산은 절대 쓰면 안 된다. 배열 자체가 망가져버린다!!
	위의 포인터를 사용한 예시와 달리, 한 자리에 서서 특정 거리에 있는 원소를 집어온다는 생각으로 보면 된다.
	*/

	return 0;

}