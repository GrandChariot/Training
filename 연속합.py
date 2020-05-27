#연속합

n = int(input())
numlist_dummy = input().split()
numlist = list(map(lambda x: int(x), numlist_dummy))
numlist_neg = list(filter(lambda x: x <=0, numlist))

if numlist_neg == numlist:
    print(max(numlist))
else:
    templist = []
    flag = False
    while True:
        i = 0
        sum1 = 0
        maximum = 0
        while True:
            sum1 = sum1 + numlist[i]
            if sum1 > maximum:
                maximum = sum1
            i += 1
            if sum1 < 0:
                templist.append(maximum)
                numlist = numlist[i:]
                break
            if i == len(numlist):
                templist.append(maximum)
                flag = True
                break
        if flag == True or numlist == []:
            break
    print(max(templist))
