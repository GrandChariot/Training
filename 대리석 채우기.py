#대리석 채우기
#크기가 2X1 또는 2X2인 대리석 조각을 직사각형 모양의 벽면에 붙이려고 한다.
#직사각형은 2Xn의 크기를 갖는다.
#대리석 조각으로 직사각형을 모두 커버할 수 있는 경우의 수를 구해보자.
#여기서 대리석 조각은 1X2, 2X1, 2X2의 세 가지 종류가 존재한다.

def marble(n):
    #2Xn 크기의 직사각형을 채우는 경우의 수를 구하는 함수.
    if n <= 1 :
        return 1
    if n == 2:
        return 3
    return marble(n-1) + marble(n-2)*2

while True:
    n = int(input("행의 개수를 입력해주세요: "))
    print(marble(n))
