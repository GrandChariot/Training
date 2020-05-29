#정수 삼각형

def sumtriangle(list1, row):
    i = 0
    newrow = []
    while i < len(list1[row]):
        newrow.append(max(list1[row+1][i], list1[row+1][i+1]) + list1[row][i])
        i += 1
    return newrow

triangle1 = []
n = int(input())
for i in range(n):
    row = input().split()
    introw = []
    for num in row:
        introw.append(int(num))
    triangle1.append(introw)

length = len(triangle1) - 2
while length >= 0:
    newrow = sumtriangle(triangle1, length)
    triangle1[length] = newrow
    length -= 1

print(triangle1[0][0])
