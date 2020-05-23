#반복문을 사용하여 피보나치 수열 구하기

def Fibonacci(n):
    #피보나치 수열을 n번째까지 출력하는 함수
    if n <= 1:
        print('1')
        return
    Fibonacci_list = [1, 1]
    for i in range(2, n):
        Fibonacci_list.append(Fibonacci_list[i-2]+Fibonacci_list[i-1])
    for j in Fibonacci_list:
        print(j, end = ' ')
    print()

while True:
    n = int(input("항의 개수를 입력해주세요: "))
    Fibonacci(n)
