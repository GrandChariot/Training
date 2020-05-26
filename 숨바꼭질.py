#숨바꼭질

N, K = input().split()
N, K = int(N), int(K)

def find(N, K):
    if N >= K:
        return N-K
    if 4*N >= 3*K:
        return K-N
    if K%2 == 0:
        return find(N, K//2) + 1
    else:
        return min(find(N, (K+1)//2), find(N, (K-1)//2)) + 2

if N == 0 and K == 0:
    print(0)
elif N == 0:
    print(find(1,K) + 1)
else:
    print(find(N, K))
