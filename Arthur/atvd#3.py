lista = input().split(' ')
lista.sort()

for i in range(len(lista)):
    lista[i] = (lista[i].lower())
    lista[i] = lista[i].removesuffix(',')
    lista[i] = lista[i].removesuffix('.')
trocou = 1

while(trocou):
    trocou = 0
    for i in range(len(lista)-1):
        if len(lista[i]) > len(lista[i+1]):
            aux = lista[i]
            lista[i] = lista[i+1]
            lista[i+1] = aux
            trocou = 1
for i in range(len(lista)):
    print(lista[i])
