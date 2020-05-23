#만들 수 있는 삼각형의 개수 구하기(재귀 호출)
#세 변의 길이의 합이 주어진 숫자 n보다 작거나 클 때 삼각형의 세 변의 길이를 구하는 문제
#a, b, c 세 변에 대해 a를 1씩 증가시키며 b와 c 길이의 조합을 구한다.
#'최적화'와는 거리가 멀지만 이에 대해서는 나중에 생각하도록 한다.
#조건 1: 전체 탐색을 위해 삼각형의 세 변을 1부터 n까지 증가시키는 반복문을 사용한다.
#조건 2: 삼각형이 되는 조건을 만족해야 한다.

def able_triangle(a, b, c):
    if a <= b and b <= c and a + b > c:
        return True
    return False
    #세 숫자 a, b, c가 삼각형의 세 변이 될 수 있는지 판별하는 함수
    #중복 배제를 위해 a보다 b가 길고 c가 빗변인 경우만을 고려한다

def triangle(n, a=1, b=1, c=1):
    global flag
    if n < 3:
        return 0
    if able_triangle(a,b,c) == True and a+b+c == n and flag[a][b][c] == 0:
        flag[a][b][c] = 1
        return 1
        #a, b, c가 삼각형을 만족하고 합이 n이면 1을 반환한다
    elif a+b+c == n:
        return 0
        #a, b, c의 합이 n이지만 삼각형은 되지 않으면 0을 반환한다
    return triangle(n, a+1, b, c) + triangle(n, a, b+1, c) + triangle(n, a, b, c+1)
    #세 변의 길이의 합이 n일 때 가능한 세 변의 길이의 종류를 구하는 함수
    
#만들다보니 tree 구조에서 (1,2,2)가 두 번 발견되는 오류를 발견하였다.
#이를 방지하기 위해선 flag를 활용해야 한다는 사실을 알게 되었다.

while True:
    n = int(input("세 변의 합을 입력해주세요: "))
    flag = []
    for i in range(n):
        flag.append([])
        for j in range(n):
            flag[i].append([])
            for k in range(n):
                flag[i][j].append(0)
    print("가능한 삼각형은 {}개입니다.".format(triangle(n)))
