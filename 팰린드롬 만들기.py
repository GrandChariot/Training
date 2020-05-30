#팰린드롬 만들기

S = input()

i = 0
flag = False
while True:
    chara = S[i]
    if chara == S[-1]:
        j = 0
        cnt = 0
        while True:
            if S[j+i] != S[-j-1]:
                break
            cnt += 1
            if 2*j + i + 1 == len(S):
                print(2*len(S) - 2*cnt + 1)
                flag = True
                break
            if  2*j + i + 1 == len(S) - 1:
                print(2*len(S) - 2*cnt)
                flag = True
                break
            j += 1
    if flag == True:
        break
    i += 1
    if i == len(S):
        print(len(S) * 2)
        break
