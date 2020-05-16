#소인수분해 구하기
#조건 1: 주어진 숫자 n이 i로 나누어지면 해당 i는 n의 인수에 해당하며
#n = n/i로 저장하여 이 과정을 반복한다.
#조건 2: 반복문을 간단하게 하기 위해 무한루프를 사용한다.

def factorization(number):
    i = 2
    factors = []
    while True:
        if number % i == 0:
            factors.append(i)
            number = number // i
        else:
            i += 1
        if number == 1:
            return factors

while True:
    number = int(input("숫자를 입력해주세요: "))
    print(factorization(number))
            
