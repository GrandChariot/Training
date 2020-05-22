#알파벳 순서대로 하나씩 줄여가며 출력하기(반복문 사용)
#조건 1: 26행을 반복하여 출력한다.
#조건 2: 'A'부터 ('Z'-'A')만큼 출력한다.

alphabets = []
index = ord('A')

while True:
    alphabet = chr(index)
    alphabets.append(alphabet)
    if alphabet == 'Z':
        break
    index += 1
    #대문자 알파벳으로 이루어진 리스트 만들기

while True:
    for alphabet in alphabets:
        print(alphabet, end = " ")
    alphabets = alphabets[:-1]
    print()
    if alphabets == []:
        break
