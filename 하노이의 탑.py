#하노이의 탑
#조건 1: 한 번에 하나의 원판만 옮길 수 있다.
#조건 2: 큰 원판이 작은 원판 위에 있어서는 안 된다.
#하노이의 탑은 재귀함수를 이용하면 쉽게 만들 수 있다.

movement = 0

def hanoi(n, a, b, c):
    global movement
    if n == 0:
        return
    hanoi(n-1, a, c, b)
    #n번째를 빼고 나머지를 옮기는 재귀함수
    print("{}번 원반을 {}에서 {}로 옮긴다.".format(n, a, b))
    #n번째를 옮기는 재귀함수
    movement += 1
    hanoi(n-1, c, b, a)
    #n번째 위에 다시 나머지를 쌓는 재귀함수

while True:
    number = int(input("원반의 개수는 몇개인가요? "))
    hanoi(number, 'a', 'b', 'c')
    print("총 {}번 이동했습니다.".format(movement))
    movement = 0
