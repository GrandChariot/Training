#재귀 호출을 사용하여 최대공약수 구하기
#조건 1: 반복문의 코드 대신 재귀 호출로 작성한다.

def Euclidean_recursive(num1, num2):
    rest = num1%num2
    if rest == 0:
        return num2
    return Euclidean_recursive(num2, rest)

while True:
    num1 = int(input("첫 번째 숫자를 입력해주세요: "))
    num2 = int(input("두 번째 숫자를 입력해주세요: "))
    result = Euclidean_recursive(num1, num2)
    print("최대공약수는 {}입니다.".format(result))
