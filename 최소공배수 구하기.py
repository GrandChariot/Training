#최소공배수 구하기
#조건 1: 반복문을 사용하여 2개의 숫자가 모두 나눠질 수 있는 첫 번째 나오는 수를 구한다.
#조건 2: 반복문의 끝을 어떤 수로 설정할지 고민해야 한다.

def LCM(list1):
    #변수로 list를 받는다
    n = 1
    while True:
        i = 0
        while i< len(list1):
            if n%list1[i] > 0:
                break
            i += 1
            if i == len(list1):
                return n
        n += 1

list1 = []		
while True:
    newnum = input("숫자를 입력해주세요(공란 입력시 종료): ")
    if newnum == "":
        break
    list1.append(int(newnum))

result = LCM(list1)
print(result)
