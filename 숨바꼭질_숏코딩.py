#숨바꼭질

N, K = input().split()
N, K = int(N), int(K)

def f(N, K):
    if N >= K:
        return N-K
    if 4*N >= 3*K:
        return K-N
    if K%2 == 0:
        return f(N, K//2) + 1
    return min(f(N, (K+1)//2), f(N, (K-1)//2)) + 2

if N == 0:
    if K == 0:
        print(0)
    else:
        print(f(1,K) + 1)
else:
    print(f(N, K))
