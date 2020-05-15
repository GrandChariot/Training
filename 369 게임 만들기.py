#369 게임 만들기
#조건 1: 3의 배수를 확인하는 코드를 작성해야 한다.
#조건 2: 3의 배수가 아닌 경우는 숫자를 출력하고, 3의 배수인 경우는 "X"를 출력하는 코드를 작성해야 한다.
#조건 3: 사용자로부터 입력 받은 n까지 위의 과정을 반복해야 한다.

def multiple3(number):
    if number <= 0:
        return False
    elif number % 3 == 0:
        return True
    else:
        return False
    #3의 배수인지 확인하는 함수

number = input("숫자를 입력해주세요: ")
number = int(number)
for n in range(1, number):
    if multiple3(n) == True:
        print("X")
    else:
        print(n)
