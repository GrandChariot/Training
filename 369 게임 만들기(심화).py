#369 게임 만들기(심화)
#조건 1: 3의 배수를 확인하는 코드를 작성해야 한다.
#조건 2: 각 자릿수에 3이 존재하는지 확인하는 코드를 작성해야 한다.
#조건 3: 조건 1 또는 2에 부합하지 않는 경우 숫자를 출력하고, 부합하는 경우 "X"를 출력하는 코드를 작성해야 한다.
#조건 4: 사용자로부터 입력 받은 n까지 위의 과정을 반복해야 한다.

def multiple3(number):
    if number <= 0:
        return False
    elif number % 3 == 0:
        return True
    else:
        return False
    #3의 배수인지 확인하는 함수

def innumber3(number):
    number = str(number)
    i = 0
    for i in range(len(number)):
        if number[i] == '3':
            return True
    return False
    #각 자릿수에 3이 존재하는지 확인하는 함수

number = input("숫자를 입력해주세요: ")
number = int(number)
for n in range(1, number):
    if multiple3(n) == True or innumber3(n) == True:
        print("X")
    else:
        print(n)
