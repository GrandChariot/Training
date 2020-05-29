#피보나치 함수

T = int(input())

results = []
results.append((1, 0))
results.append((0, 1))

for i in range(T):
    N = int(input())
    for j in range(0, N+2):
        if len(results) > N:
            print("{} {}".format(results[N][0], results[N][1]))
            break
        if len(results) > j:
            continue
        new = (results[j-1][0]+results[j-2][0], results[j-1][1]+results[j-2][1])
        results.append(new)
