#점수 분포 출력하기
#조건 1: 입력된 점수의 끝은 -1로 확인한다.
#조건 2: 점수를 10으로 나누어 저장할 점수대의 인덱스를 구한다.

def spread(list1):
    result = [0]*11
    i = 0
    while i < len(list1):
        index = list1[i] // 10
        result[index] += 1
        i += 1
    j = 0
    while j < len(result):
        print("{}점대: {}명".format(j*10, result[j]))
        j += 1

scores = []
while True:
    new_score = int(input("점수를 입력해주세요: "))
    if new_score == -1:
        break
    scores.append(new_score)

spread(scores)
