#그룹 단어 체커

def group_check(word):
    index = 0
    while True:
        if index >= len(word)-2:
            return True
        #해당사항 없다면 True를 반환한다
        if word[index] != word[index+1]:
            index2 = index+2
            #블록이 깨진 경우
            while index2 < len(word):
                if word[index] == word[index2]:
                    return False
                index2 +=1
        index += 1

cnt = 0
n = int(input())
for i in range(n):
    new_word = input()
    if group_check(new_word) == True:
        cnt += 1
print(cnt)
