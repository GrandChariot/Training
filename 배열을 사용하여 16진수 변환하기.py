#배열을 사용하여 16진수 변환하기
#10진수를 16진수로 변환하는 알고리즘

def hexadecimal(n):
    table = '0123456789ABCEDF'
    if n > 0:
        new_digit = table[n%16]
        new_n = n//16
        return hexadecimal(new_n) + new_digit
    else:
        return ''

while True:
    number = int(input("변환할 숫자를 입력해주세요: "))
    print("16진법 변환 결과: " + hexadecimal(number))
    
