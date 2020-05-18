#등수 구하기
#조건 1: 전체 점수의 처음부터 끝까지 반복하여
#현재의 점수가 몇 번째의 크기를 갖는지를 계산한다.

def rank(list1):
    for currentscore in list1:
        scorerank = 1
        flag_common = 0
        for comparescore in list1:
            if comparescore > currentscore:
                scorerank += 1
            elif comparescore == currentscore:
                flag_common += 1
                #같은 점수가 있으면 flag가 1 상승
        if flag_common > 1:
            print("{}점은 공동 {}등입니다.".format(currentscore, scorerank))
            #flag가 1을 초과하면, 동점자가 있다는 뜻
        else:
            print("{}점은 {}등입니다.".format(currentscore, scorerank))

scores = []
while True:
    new_score = int(input("점수를 입력해주세요: "))
    if new_score == -1:
        break
    scores.append(new_score)

rank(scores)
