#반복문과 재귀문으로 팩토리얼 출력하기
#팩토리얼과 같은 반복문은 반복적 방법과 재귀적 방법으로 해결할 수 있다.

def factorial(n):
    dummy_n = n
    result = 1
    while True:
        result = result * dummy_n
        dummy_n -= 1
        if dummy_n == 1:
            break
    return result

def factorial_recur(n):
    if n == 1:
        return 1
    return factorial_recur(n-1) * n

while True:
    number = int(input("숫자를 입력해주세요: "))
    print(factorial(number))
    print(factorial_recur(number))
    if factorial(number) == factorial_recur(number):
        print("성공!")
