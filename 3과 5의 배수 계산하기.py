#3과 5의 배수 계산하기
#조건 1: 배수의 개념을 코드로 만들 수 있어야 한다.
#조건 2: 3의 배수이면서 동시에 5의 배수인지를 확인하는 개념을 코드로 만들 수 있어야 한다.
#조건 3: 반복문을 사용하여 1부터 n까지 1씩 증가하면서 제어 변수를 확인한다.

def multiple(aliquot, number):
    if number%aliquot == 0:
        return True
    else:
        return False

def find_multiple15(number):
    for i in range(1, number+1):
        if multiple(3, i) == True and multiple(5, i) == True:
            print(i)

find_multiple15(100)
