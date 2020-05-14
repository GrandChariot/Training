#버블소트!

def bubble_sort(list_1):
    for j in range(len(list_1)):
        i = 0
        while i < len(list_1)-j-1 :
            temp = list_1[i]
            if list_1[i+1] < temp:
                list_1[i] = list_1[i+1]
                list_1[i+1] = temp
            i += 1

list_1 = [9, 1, 4, 2, 5, 3, 1, 8]
bubble_sort(list_1)
print(list_1)
