#삽입 정렬 알고리즘

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

list_1 = [3, 1, 4, 5, 2, 1]
insert_sort(list_1)
print(list_1)
