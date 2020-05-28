#괄호

T = int(input())
for i in range(T):
    temp = input()
    if temp[0] == ')' or len(temp) % 2 > 0:
        print('NO')
        continue
    temp = list(temp)
    i = 0
    while True:
        if temp == []:
            print('YES')
            break
        if temp[i] == '(' and temp[i+1] == ')':
            del temp[i:i+2]
            i = 0
            continue
        i += 1
        if i == len(temp)-1:
            print('NO')
            break
