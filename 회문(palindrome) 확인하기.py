#회문(palindrome) 확인하기
#조건 1: 주어진 문자열의 처음과 끝의 문자를 비교한다.
#같으면 그 다음 문자를 비교하고 아니면 빠져나온다.

def palindrome(word):
    length = len(word)
    index = 0
    while index < length/2:
        reverseindex = -(index+1)
        if word[index] != word[reverseindex]:
            return False
        index += 1
    return True

while True:
    word = input("단어를 입력해주세요: ")
    if palindrome(word) == True:
        print("팰린드롬입니다.")
    else:
        print("팰린드롬이 아닙니다.")
