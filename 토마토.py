#토마토

M, N = input().split()
M, N = int(M), int(N)
field = []
for i in range(N):
    row = input().split()
    field.append(row)

#좌표는 N, M으로 기록한다.

ripen = []

i = 0
while i < len(field):
    row = field[i]
    j = 0
    while j < len(row):
        if row[j] == '1':
            ripen.append((i, j))
        j += 1
    i += 1

cnt = 0
while True:
    new_ripen = []
    flag = False
    for (a, b) in ripen:
        if b < M-1 and field[a][b+1] == '0':
            field[a][b+1] = '1'
            new_ripen.append((a, b+1))
            flag = True
        if a < N-1 and field[a+1][b] == '0':
            field[a+1][b] = '1'
            new_ripen.append((a+1, b))
            flag = True
        if a > 0 and field[a-1][b] == '0':
            field[a-1][b] = '1'
            flag = True
            new_ripen.append((a-1, b))
        if b > 0 and field[a][b-1] == '0':
            field[a][b-1] = '1'
            flag = True
            new_ripen.append((a, b-1))
    if flag == False:
        break
    flag = False
    cnt += 1
    ripen = new_ripen

success = True
for row in field:
    if '0' in row:
        success = False
        break

if success == False:
    print(-1)
else:
    print(cnt)
