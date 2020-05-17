#반복문을 사용하여 조합(nCr) 구하기

def factorial(n):
    result = 1
    for i in range(1, n+1):
        result = result * i
    return result

def combination(n, r):
    result = int(factorial(n)/(factorial(r)*factorial(n-r)))
    return result

while True:
    n = int(input("n = "))
    r = int(input("r = "))
    print("{}C{} = {}".format(n, r, combination(n, r)))
