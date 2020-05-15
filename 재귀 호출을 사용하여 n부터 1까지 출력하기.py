#재귀 호출을 사용하여 n부터 1까지 출력하기
#조건 1: n부터 1까지 역순으로 화면에 출력해야 한다
#조건 2: 출력하는 숫자가 1이 되면 프로그램을 종료한다

def call(maxnum):
    print(maxnum)
    if maxnum > 1:
        call(maxnum-1)

call(20)
