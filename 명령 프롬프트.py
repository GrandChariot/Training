#명령 프롬프트

N = int(input())
common = input()
for i in range(N-1):
    filename = input()
    j = 0
    newcommon = ''
    while j < len(filename):
        if common[j] != filename[j]:
            newcommon = newcommon + '?'
        else:
            newcommon = newcommon + common[j]
        j += 1
    common = newcommon

print(common)
