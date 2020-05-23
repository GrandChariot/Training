#파스칼의 삼각형
#이항계수를 삼각형 모양으로 배열한 형태
#조건 1: 현재의 숫자는 바로 위의 숫자와 오른쪽 숫자를 덧셈하여 구한다.

def pascal(n):
    blank = 3*n - 2
    list1 = [1, 1]
    print(' '*blank + ' 1 ')
    i = 2
    while i <= n:
        blank -= 3
        print(' ' * blank, end = '')
        for j in list1:
            str_j = "{0:^3}".format(j)
            print(str_j, end = '   ')
        print()
        pre_list = list1
        list1 = [1]
        k = 0
        while k < len(pre_list) - 1:
            list1.append(pre_list[k] + pre_list[k+1])     
            k += 1
        list1.append(1)
        i += 1

while True:
    n = int(input("층수를 입력해주세요: "))
    pascal(n)
        
#아쉽게도 이 프로그램에서는 세자릿수까지의 출력만 고려했다.
#그 이상을 예쁘게 출력하기 위해서는 string에 대한 공부가 더 필요할 듯하다.
