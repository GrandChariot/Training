#동적계획법을 사용하여 피보나치 수 구하기
#동적계획법은 기존의 데이터들을 저장해놓고 새로운 데이터를 구하는 데에 사용하는 방법
#재귀 함수보다 처리 속도가 빠른 것이 장점

Fibonacci_list = [1, 1]

def Fibonacci(n):
    global Fibonacci_list
    current_length = len(Fibonacci_list)
    if current_length < n:
        for i in range(current_length, n):
            Fibonacci_list.append(Fibonacci_list[i-2]+Fibonacci_list[i-1])
            #연산 횟수를 최소화하기 위해 이미 있다면 다시 계산하지 않는다.
            #연산 결과는 리스트에 저장한다.
    return Fibonacci_list[n-1]

while True:
    n = int(input("몇 번째 숫자를 찾을까요?: "))
    print(Fibonacci(n))
