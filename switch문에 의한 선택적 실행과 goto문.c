#include <stdio.h>

int main(void)
{
	/*
	switch문은 python에는 없는 개념이다.
	그러나 전혀 낯선 개념은 아니고 쉽게 익힐 수 있다.
	조건에 따라 어떤 위치로 이동하는 거.
	어셈블리어에서는 유사한 것을 종종 본 적이 있을 것이다.
	*/

	int num;
	scanf("%d", &num);

	switch(num) // 스위치를 만든다!
	{
	case 1:
		printf("1");
	case 2:
		printf("2");
	case 3: // 만약 num=3이면 바로 여기로 점프!
		printf("3"); // 출력값은 "345"가 된다.
	case 4:
		printf("4");
	case 5:
		printf("5 \n"); break;
	default:
		printf("범위 밖! \n"); // case 안에 없는 num일 경우 default로 이동한다.
	}

	/*
	이를 통해 알 수 있는 switch의 특징은
	조건에 따라서 어느 행으로 점프할지가 정해진다는 점이다.
	if~else보다 사용처는 한정적이지만 더 예쁘다고 생각하는 경우도 왕왕 있다.
	*/

	/*
	goto는 지금은 거의 사장된 문법이다.
	실제로 많은 사람들 사이에서 쓸모가 없다고 판단되었다.
	그러나 알아서 손해볼 건 없으니 간단하게 알아보도록 하자.
	*/

	int num2;
	scanf("%d", &num2);
	if (num2 > 10)
		goto large;
	else
		goto small;


large: // 레이블은 왼쪽정렬이 된다.
	printf("10보다 큽니다! \n");
	goto end;
small:
	printf("10보다 작습니다! \n");
end:

	/*
	보다시피 거의 대부분 다른 반복문, 조건문으로 대체 가능하며 괜히 복잡하기만 하다.
	그래도 언젠간 쓸 수 있을지도 모른다.
	가끔 python을 하면서 이런 기능이 있으면 좋겠다 싶을 때가 없던 건 아니기 때문이다!
	*/

	return 0;
}