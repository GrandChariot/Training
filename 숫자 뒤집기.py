#숫자 뒤집기
#조건 1: 정수의 자릿수를 계산하는 방식을 고민해야 한다.
#조건 2: 이 문제의 경우에는 반복문보다는 재귀 호출을 응용하는 것이 간단하다.

def reverse(number):
    number = str(number)
    new_number = str()
    i = 1
    while i <= len(number):
        new_number = new_number + number[-i]
        i += 1
    new_number = int(new_number)
    return new_number

print(reverse(123456))
