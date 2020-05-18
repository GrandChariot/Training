#두 숫자간의 차이 구하기
#두 숫자 중 어떤 수가 더 큰지 아는 것이 중요하다.

def differ(a, b):
    if a > b:
        return a - b
    else:
        return b - a

while True:
    a = int(input("첫 번째 숫자를 입력해주세요: "))
    b = int(input("두 번째 숫자를 입력해주세요: "))
    print("두 수의 차이는 {}입니다".format(differ(a, b)))
