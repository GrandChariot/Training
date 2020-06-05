#include <stdio.h>

int main(void)
{
	/*
	문제 3
	학생의 전체 평균점수에 대한 학점을 출력하는 프로그램을 작성하자.
	학생의 성적이 90점 이상이면 A, 80점 이상이면 B,
	70점 이상이면 C, 50점 이상이면 D, 그 미만이면 F다!
	프로그램 실행 시 순서대로 국어, 영어, 수학의 점수를 입력 받는다.
	그리고는 평균을 구한 다음 그에 적절한 학점을 출력하면 된다.
	*/

	int korean, english, math;
	printf("국어, 영어, 수학 성적을 입력해주세요: ");
	scanf("%d %d %d", &korean, &english, &math);
	double average = ((double)korean + english + math) / 3;

	if (average > 90)
		printf("평균은 %f점으로 A입니다", average);
	else if (average > 80)
		printf("평균은 %f점으로 B입니다", average);
	else if (average > 70)
		printf("평균은 %f점으로 C입니다", average);
	else if (average > 50)
		printf("평균은 %f점으로 D입니다", average);
	else
		printf("평균은 %f점으로 F입니다!", average);

	return 0;
}