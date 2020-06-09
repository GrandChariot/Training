#include <stdio.h>

/*
문제 3
성적관리 프로그램을 작성하자.
과목은 국어, 영어, 수학, 국사 이렇게 네 과목이고
학생은 철희, 철수, 영희, 영수 이렇게 네 사람이다.
프로그램 사용자로부터 이 네 사람의 과목 점수를 입력 받는다.
그리고 미리 선언해 놓은 배열에 다음의 형태로 그 값을 저장해야 한다.

     국어 영어 수학 국사 총점
철희
철수
영희
영수
총점
*/

int main(void)
{
    int arr[5][5];
    char* student[5] = { "철희", "철수", "영희", "영수", "총점" };
    for (int i = 0;i < 4;i++)
    {
        printf("%s의 국어, 영어, 수학, 국사 점수를 입력해주세요: \n", student[i]);
        scanf("%d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
        arr[i][4] = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3];
    }

    for (int i = 0; i < 5; i++)
        arr[4][i] = arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i];

    printf("\n     국어 영어 수학 국사 총점 \n");
    for (int i = 0;i < 5;i++)
        printf("%s %4d %4d %4d %4d %4d \n", student[i], arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4]);
    return 0;

}