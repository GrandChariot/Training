#include <stdio.h>

/*
재귀함수는 각종 코딩 문제를 해결할 때에 빈번하게 쓰여서 아주 익숙하다.
또한 자료구조와 알고리즘(특히 tree 알고리즘)에 있어서 필수적이다.
이미 다 아는 내용이라도 재귀함수가 '어떻게' 돌아가는지에 대해서는 깊게 이해하면 좋을 것이다.
*/

void recursive(num)
{
	if (num > 10)
	{
		printf("\n");
		return;
	}
	printf("%d ", num);
	recursive(num + 1); // 재귀함수!
	return;
}

/*
어떻게 아직 완결되지도 않은 함수를 다시 호출하는가?
물론 가능하다. 그런데 그 방법은, 기존의 함수를 복사해서 안에 붙여넣기 하는 것이다.
가령 딱 한 번만 더 반복된다고 생각해보자.
*/

void temp(num)
{
	if (num > 10)
	{
		printf("\n");
		return;
	}
	printf("%d", num);
	if (num + 1 > 10) // 여기서부터 복사 붙여넣기 파트!
	{
		printf("\n");
		return;
		printf("%d", num + 1);
		return;
		/*
		이 아래로 또 붙여넣기가 되어야겠지만, 무한히 할 수는 없으니 그만두기로 한다.
		그렇기 때문에 재귀함수가 존재하는 것이다.
		*/
	}
}

int main(void)
{
	recursive(1);

	return 0;
}

