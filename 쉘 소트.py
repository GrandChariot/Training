#쉘 소트?

import random

def insert_sort(list_1):
    i = 1
    while i < len(list_1):
        temp = list_1[i]
        j = i - 1
        while True:
            if list_1[j] < temp or j < 0:
                break
            list_1[j+1] = list_1[j]
            j -= 1
        list_1[j+1] = temp
        i += 1
        #참조용 삽입소트

def shell_sort(list_1):
    h = 1
    while h <= len(list_1):
        h = 3*h+1
    h = h//3
    #h는 삽입 정렬을 하기 위한 최적의 gap
    while h != 0:
        i = 0
        while i < len(list_1)-h :
            index_right = i+h
            index_left = i
            #삽입 정렬과 마찬가지로 기준이 되는 인덱스 i+h와 그 이전 인덱스 i를 설정
            temp = list_1[index_right]
            while True:
                if list_1[index_left] < temp or index_left < 0:
                    break
                #리스트의 오른쪽 숫자가 왼쪽보다 크다면 삽입하지 않고 루프 종료
                list_1[index_left+h] = list_1[index_left]
                index_left = index_left - h
                #그렇지 않다면 왼쪽 숫자를 h만큼 오른쪽으로 옮기고 다시 h만큼 왼쪽 숫자를 찾는다
            list_1[index_left+h] = temp
            i += 1
            #루프 종류 후 루프 종료 이전 가장 마지막 위치에 temp를 삽입한다
        h = h//2
    
list_1 = []
for i in range(100):
    list_1.append(random.randint(1,100))
print("정렬 전")
print(list_1)
shell_sort(list_1)
print("정렬 후")
print(list_1)
