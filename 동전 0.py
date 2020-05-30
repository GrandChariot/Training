#동전 0

N, K = input().split()
N, K = int(N), int(K)
A = []
for i in range(N):
    new = int(input())
    A.append(new)

cnt = 0
j = N - 1
while j >= 0:
    temp = K // A[j]
    if temp > 0:
       cnt += temp
       K -= temp * A[j]
    if K == 0:
        break
    j -= 1

print(cnt)
