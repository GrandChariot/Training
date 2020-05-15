#재귀 호출을 사용하여 1부터 20까지 출력하기
#조건 1: 1부터 출력해야 한다.
#조건 2: 재귀 호출을 빠져 나오는 제어 조건을 명확하게 정의해야 한다.
#조건 3: 재귀 함수의 호출과 재귀 함수 내의 처리 문장의 실행 순서를 명확하게 정의해야 한다.

def call(minnum, maxnum):
    print(minnum)
    if minnum == maxnum:
        return
    else:
        call(minnum+1, maxnum)

def call2(maxnum):
    if maxnum > 0:
        call2(maxnum-1)
    print(maxnum)

call1(1, 20)
call2(20)
