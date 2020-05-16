#약수 구하기
#조건 1: n의 약수를 구하기 위해서 2부터 n의 제곱근까지만 탐색한다.
#조건 2: 소수가 아닌 경우에는 약수를 구해야 하기 때문에
#이전의 소수를 구하는 문제와는 달리 break문을 사용할 수 없다.
#조건 3: 소수인지 아닌지를 저장해두기 위해 플래그 변수를 사용한다.

def divisor(number):
    divisors = []
    divisors.append(1)
    flag = False
    i = 2
    while i < number:
        if number % i == 0:
            divisors.append(i)
            flag = True
            #flag는 2부터 number-1까지 중 한 번이라도 나누어떨어지면 True가 됨
        i += 1
    divisors.append(number)
    if flag == False:
        return "소수"
        #flag가 False라면 한 번도 나누어떨어지지 않은 것이므로 소수
    return divisors

while True:
    number = input("숫자를 입력해주세요: ")
    number = int(number)
    divisors = divisor(number)
    print(divisors)
