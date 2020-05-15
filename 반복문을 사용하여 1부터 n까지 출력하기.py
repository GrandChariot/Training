#반복문을 사용하여 1부터 n까지 출력하기
#조건 1: 1부터 순서대로 화면에 출력해야 한다
#조건 2: 출력하는 숫자가 n이 되면 프로그램을 종료한다

def call(maxnum):
    number = 1
    while number <= maxnum:
        print(number)
        number += 1

call(20)
