import random

def selected_sort(list_1):
    i = 0
    while i < len(list_1):
        min = list_1[i]
        index = i
        for j in range(i+1, len(list_1)):
            if min > list_1[j]:
                min = list_1[j]
                index = j
        list_1[index] = list_1[i]
        list_1[i] = min
        i += 1
    return

list_1 = [1,3,2,6,82,22,9]
selected_sort(list_1)
print(list_1)
