#반복문을 사용하여 최대공약수 구하기(유클리드 호제법)
#2개의 숫자를 각각 a, b라고 한다.
#큰 숫자를 작은 숫자로 나누어 나머지를 구한다.
#큰 숫자가 있던 자리에 나머지를 넣은 후 위를 반복한다.
#나머지가 0이 되면 연산을 중지하고, 바로 이전의 나머지가 최대공약수가 된다.

def Euclidean(num1, num2):
    if num1 >= num2:
        big = num1
        small = num2
    else:
        big = num2
        small = num1
    while True:
        rest = big % small
        if rest == 0:
            return small
        big = small
        small = rest
        
while True:
    num1 = int(input("첫 번째 숫자를 입력해주세요: "))
    num2 = int(input("두 번째 숫자를 입력해주세요: "))
    result = Euclidean(num1, num2)
    print("최대공약수는 {}입니다.".format(result))
        
