#최적화된 조합(nCr)
#목표는 재귀 호출을 1번으로 줄이는 것!

def combination(n, r):
    if n == r:
        return 1
    return int(combination(n-1, r)*(n/(n-r)))

while True:
    n = int(input("n = "))
    r = int(input("r = "))
    print("{}C{} = {}".format(n, r, combination(n, r)))
