#유기농 배추

T = int(input())

for i in range(T):
    M, N, K = input().split()
    M, N, K = int(M), int(N), int(K)
    #배추밭을 만들자!
    field = [[0 for n in range(N)] for M in range(M)]
    
    for j in range(K):
        x, y = input().split()
        x, y = int(x), int(y)
        field[x][y] = 1
    #배추밭에 배추를 심었다!

    cnt = 0
    current = 1
    x, y = 0, 0
    while x < M:
        while y < N:
            if field[x][y] == 1:
                #아직 색칠되지 않은 배추 발견
                if x < M-1 and field[x+1][y] > 1:
                    field[x][y] = field[x+1][y]
                elif y < N-1 and field[x][y+1] > 1:
                    field[x][y] = field[x][y+1]
                    #근처에 색칠된 배추가 있다면 그 숫자로 칠한다
                else:
                    cnt += 1
                    current += 1
                    field[x][y] = current
                    #어느 것에도 해당되지 않는다면 새로운 숫자를 만들어 칠한다
            if field[x][y] > 1:
                #해당 칸이 색칠되어있다면
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
                        #혹시 인접한 칸에 다른 색이 있다면 오류를 수정
                if x < M-1 and field[x+1][y] == 1:
                    field[x+1][y] = field[x][y]
                if y < N-1 and field[x][y+1] == 1:
                    field[x][y+1] = field[x][y]
                   #우측 칸과 하단 칸을 같은 숫자로 칠한다 
            y += 1
        x += 1
        y = 0
    print(cnt)
