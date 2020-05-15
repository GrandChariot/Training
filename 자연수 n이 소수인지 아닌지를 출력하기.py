#자연수 n이 소수인지 아닌지를 출력하기
#조건 1: 반복문을 사용하여 주어진 숫자 n을 2부터 n-1까지 반복하면서 나누고
#나눈 결과가 하나라도 나눈 몫을 구할 수 있으면 소수가 아닌 합성수이다.
#조건 2: 위의 반복문이 끝난 결과로 제어 변수가 주어진 n과 같으면 소수이고 같지 않으면 합성수이다.

def prime(number):
    for i in range(2, number):
        if number % i == 0:
            return False
    return True

while True:
    number = input("숫자를 입력해주세요: ")
    number = int(number)
    if prime(number) == True:
        print("소수입니다")
    else:
        print("소수가 아닙니다")
