#알파벳 순서대로 하나씩 줄여가며 출력하기(재귀 호출 사용)
#조건 1: 반복문을 사용하여 'A'부터 문자를 출력한다.
#조건 2: 'Z'부터 하나씩 감소하여 재귀 함수를 호출한다.

def printalphabet(alphabet, index = 65):
    print(chr(index), end = " ")
    if chr(index) == alphabet:
        return
    printalphabet(alphabet, index+1)
    #'A'부터 지정된 알파벳까지 출력하는 재귀함수

def reducealphabet(alphabet = 'Z'):
    order = ord(alphabet)
    printalphabet(alphabet)
    if alphabet == 'A':
        return
    print()
    reducealphabet(chr(order-1))

reducealphabet()
