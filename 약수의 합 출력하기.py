#약수의 합 출력하기
#조건 1: 주어진 숫자 n의 약수에는 1과 자기자신도 포함된다.
#조건 2: 약수를 구할 때마다 하나의 변수에 더하여 지정한다.

def sum_divisors(number):
    divisors = []
    n = 1
    while n <= number:
        if number % n == 0:
            divisors.append(n)
        n += 1
    return sum(divisors)

while True:
    number = int(input("숫자를 입력해주세요: "))
    print(sum_divisors(number))
