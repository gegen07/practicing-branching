# Implementação do algoritmo de Soma de Prefixos em Python
# @author Bryan Oliveira - @ibryans

def prefix_sum(list):
    for index, num in enumerate(list):
        previous_num = 0
        if (index > 0):
            previous_num = list[index-1]
        new_num = num + previous_num
        list[index] = new_num

list_example = [5, 6, 7, 8, 9, 10]

print("Lista Inicial: \n ", list_example)
prefix_sum(list_example)
print("Lista com índices somados: \n ", list_example)