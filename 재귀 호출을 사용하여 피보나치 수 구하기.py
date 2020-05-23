#재귀 호출을 사용하여 피보나치 수 구하기
#조건 1: fn = fn-1 + fn-2 (n > 2)

def Fibonacci_recur(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    result = Fibonacci_recur(n-1) + Fibonacci_recur(n-2)
    return result

while True:
    n = int(input("몇 번째 수를 구할지 입력해주세요: "))
    print(Fibonacci_recur(n))
