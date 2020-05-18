#재귀 호출을 사용하여 조합(nCr) 구하기

def combination(n, r):
    if r == 1:
        return n
    if n == r:
        return 1
    return combination(n-1, r) + combination(n-1, r-1)

while True:
    n = int(input("n = "))
    r = int(input("r = "))
    print("{}C{} = {}".format(n, r, combination(n, r)))
