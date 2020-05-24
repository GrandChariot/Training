#그룹 단어 체커2
#1에 비해 시간을 최적화하도록 노력했다.

def group_check(word):
    index = 0
    apblist = []
    while index < len(word):
        if word[index] not in apblist:
            apblist.append(word[index])
            index += 1
            continue
        if word[index] in apblist:
            if apblist[-1] == word[index]:
                index += 1
                continue
            else:
                return False
    return True

cnt = 0
n = int(input())
for i in range(n):
    new_word = input()
    if group_check(new_word) == True:
        cnt += 1
print(cnt)
