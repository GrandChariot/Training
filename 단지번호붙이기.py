#단지번호붙이기

N = int(input())
area = []
for i in range(N):
    row = " ".join(input()).split()
    area.append(row)

i = 0
j = 0
cnts = []
for i in range(N):
    for j in range(N):
        if area[i][j] == '1':
            cnt2 = 1 #각 영역의 집 수를 세는 임시 변수
            area[i][j] = '0' #체크를 마친 곳은 일단 지워주자.
            occupied = [(i, j)]
            while True:
                flag = False #한 번이라도 전염이 일어났는지 체크해준다.
                new_occupied = []
                for x, y in occupied:
                    if y < N-1 and area[x][y+1] == '1':
                        area[x][y+1] = '0'
                        cnt2 += 1
                        new_occupied.append((x, y+1))
                        flag = True
                    if x < N-1 and area[x+1][y] == '1':
                        area[x+1][y] = '0'
                        cnt2 += 1
                        new_occupied.append((x+1, y))
                        flag = True
                    if x > 0 and area[x-1][y] == '1':
                        area[x-1][y] = '0'
                        cnt2 += 1
                        new_occupied.append((x-1, y))
                        flag = True
                    if y > 0 and area[x][y-1] == '1':
                        area[x][y-1] = '0'
                        cnt2 += 1
                        new_occupied.append((x, y-1))
                        flag = True
                #이 부분은 전에 짜둔 토마토 코드를 활용했다.
                if flag == False:
                    cnts.append(cnt2)
                    break
                occupied = new_occupied

print(len(cnts))
cnts.sort()
for cnt in cnts:
    print(cnt)
