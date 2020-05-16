#2~N 사이의 모든 소수를 호출하기
#조건 1: 2부터 N까지의 반복문으로 소수 확인 함수를 호출한다.

def prime(number):
    for i in range(2, number):
        if number % i == 0:
            return False
    return True

while True:
    number = input("숫자를 입력해주세요: ")
    number = int(number)
    for i in range(2, number+1):
        if prime(i) == True:
            print(i)
