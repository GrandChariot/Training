#소수 구하기(에라스토테네스의 체)
#1부터 n까지의 수 중 소수 구하기
#우선 1은 소수가 아니므로 제외하고, 2는 소수이므로 남기지만 2의 배수는 전부 제거한다.
#다음으로 3은 소수이므로 남기고 3의 배수는 전부 제거한다.
#지워지지 않은 다음 숫자는 무조건 소수이고, 그 배수는 전부 제거한다.
#이를 n까지 반복한다.

def Eratosthenes(number):
    n = 2
    numbers = []
    primes = []
    while n <= number:
        numbers.append(n)
        n += 1
        #2부터 n까지가 포함된 리스트를 만든다.
    i = 0
    while len(numbers) > 0:
        prime = numbers[0]
        primes.append(prime)
        del numbers[0]
        #우선 리스트의 첫 번째 숫자를 소수로 지정하고 소수 리스트에 넣는다.
        for j in numbers:
            if j % prime == 0:
                numbers.remove(j)
                #남은 숫자들을 탐색하며 나누어 떨어지는 숫자를 제거한다.
    return primes

while True:
    number = int(input("숫자를 입력해주세요: "))
    print(Eratosthenes(number))
