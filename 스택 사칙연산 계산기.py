def pushnum(item):
    number.append(item)

def popnum():
    return number.pop()

def pushop(item):
    operator.append(item)

def popop():
    return operator.pop()

def calc(num1, num2, op):
    if op == '+':
        return num1+num2
    elif op == '-':
        return num1-num2
    elif op == '*':
        return num1*num2
    elif op == '/':
        return num1/num2

ops = ('+','-', '*', '/')

while True :
    operator = []
    number = []

    temp = input("계산기: ")
    temp = temp.split(' ')
    i = 0

    while i < len(temp):
        if i == 1:
            pushop(temp[i])
        elif temp[i] in ops:
            newop = temp[i]
            preop = popop()
            if (preop == '+' or preop == '-') and (newop == '*' or newop == '/'):
                pushop(preop)
                pushop(newop)
            else:
                num2 = popnum()
                num1 = popnum()
                res = calc(num1, num2, preop)
                pushnum(res)
                pushop(newop)
        else:
            pushnum(float(temp[i]))
        i += 1

    while len(operator) > 0:
        op = popop()
        num2 = popnum()
        num1 = popnum()
        res = calc(num1, num2, op)
        pushnum(res)

    print('결과는 {}입니다'.format(number[0]))
