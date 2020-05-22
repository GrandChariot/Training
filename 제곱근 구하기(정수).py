#제곱근 구하기(정수)
#조건 1: 어떤 정수 n의 제곱근을 구하기 위해서는
#n에서 차례대로 1, 3, 5, 7, 9...를 빼서 다시 n에 저장한다.
#n이 0보다 같거나 클 때까지 이 과정을 반복한다.
#n이 0보다 작아지면 지금까지 뺀 횟수가 0의 정수제곱근이 된다.

def root(n):
    temp = 1
    result = 0
    while True:
        n = n - temp
        if n < 0:
            return result
        temp += 2
        result += 1

while True:
    n = int(input("숫자를 입력해주세요: "))
    print(root(n))
