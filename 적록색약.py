#적록색약

import copy
def countarea(field, num):
    cnt = 0
    current = 1
    M = len(field)
    N = len(field[0])
    x, y = 0, 0
    while x < M:
        while y < N:
            if field[x][y] == num:
                if x < M-1 and field[x+1][y] > 1:
                    field[x][y] = field[x+1][y]
                elif y < N-1 and field[x][y+1] > 1:
                    field[x][y] = field[x][y+1]
                else:
                    cnt += 1
                    current += 1
                    field[x][y] = current
            if field[x][y] > 1:
                if y < N-1 and field[x][y+1] > 1 and field[x][y+1] != field[x][y]:
                    cnt -= 1
                    x1, y1 = 0, 0
                    temp = field[x][y+1]
                    while x1 < M:
                        while y1 < N:
                            if field[x1][y1] == temp:
                                field[x1][y1] = field[x][y]
                            y1 += 1
                        x1 += 1
                        y1 = 0
                if x < M-1 and field[x+1][y] == num:
                    field[x+1][y] = field[x][y]
                if y < N-1 and field[x][y+1] == num:
                    field[x][y+1] = field[x][y]
            y += 1
        x += 1
        y = 0
    return(cnt)


N = int(input())
                    
picture = []
picture2 = []
for i in range(N):
    row = []
    row2 = []
    temp = input()
    for color in temp:
        if color == 'R':
            row.append(1)
            row2.append(1)
        elif color == 'G':
            row.append(0)
            row2.append(1)
        else:
            row.append(-1)
            row2.append(-1)
    picture.append(row)
    picture2.append(row2)

result1 = countarea(copy.deepcopy(picture), -1) + countarea(copy.deepcopy(picture), 0) + countarea(copy.deepcopy(picture), 1)
result2 = countarea(copy.deepcopy(picture2), -1) + countarea(copy.deepcopy(picture2), 1)

print('{} {}'.format(result1, result2))
