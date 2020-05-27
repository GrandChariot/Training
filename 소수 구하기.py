#소수 구하기

M, N = input().split()
M, N = int(M), int(N)

nums = [i for i in range(0, N+1)]
flags = [0 for i in range(0, N+1)]

i = 2
while True:
    if flags[i] == 0:
        current = nums[i]
        if current >= M:
            print(current)
        for j in range(1, N//current+1):
            flags[current*j] = 1
    i += 1
    if i == len(nums):
        break
