#퀵 소트

import random

def quick_sort(list_1):
    if len(list_1) > 1:
        index_pivot = len(list_1)//2
        #임의의 pivot을 리스트의 중간 지점에 있는 것으로 지정한다.
        pivot = list_1[index_pivot]
        smaller_list = []
        equal_list = []
        bigger_list = []
        for i in range(len(list_1)):
            if list_1[i]>pivot:
                bigger_list.append(list_1[i])
                #리스트 각각의 값에 대해 pivot보다 크면 bigger_list에 넣는다
            elif list_1[i]==pivot:
                equal_list.append(list_1[i])
                #같으면 equal_list에 넣는다
            else:
                smaller_list.append(list_1[i])
                #작으면 smaller_list에 넣는다
            
        smaller_list = quick_sort(smaller_list)
        bigger_list = quick_sort(bigger_list)
        #이를 재귀적으로 반복한다
        
        return smaller_list + equal_list + bigger_list
        #세 리스트를 순서대로 더한 리스트를 반환한다
    else: return list_1
        #리스트에 값이 하나만 남거나 없어졌을 경우 자기 자신을 반환한다
        
list_1 = []
for i in range(100):
    list_1.append(random.randint(1,100))
print("정렬 전")
print(list_1)
list_1 = quick_sort(list_1)
print("정렬 후")
print(list_1)
