# Implementação do Bubble Sort em python
# @author Bryan Oliveira - @ibryans

def change_values(list, v1, v2):
    temp = list[v1]
    list[v1] = list[v2]
    list[v2] = temp
    return list

def bubble_sort(list):
    size = len(list)-1
    for passnum in range(size, 0, -1):
        for i in range(passnum):
            if list[i] > list[i+1]:
                list = change_values(list, i, i+1)

list_example = [54, 26, 93, 17, 77, 31, 44, 55, 20]

print("Lista Inicial: \n ", list_example)
bubble_sort(list_example)
print("Lista ordenada: \n ", list_example)