#Fly me to the Alpha Centauri

def flight(distance):
    if distance == 0:
        return 0
    n = int(distance ** 0.5 - 1)
    while True:
        if distance <= n**2 and distance > n*(n-1):
            return 2*n - 1
        if distance > n**2 and distance <= (n+1)*n:
            return 2*n
        n += 1

T = int(input())
for i in range(T):
    x, y = input().split()
    x, y = int(x), int(y)
    distance = y - x
    print(flight(distance))
