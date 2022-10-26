def main():
    lista = []
    n = int(input("digite o tamanho da lista \n"))
    for i in range (n):
        numero = int(input("digite o elemento da lista\n"))
        lista.append(numero)
    bubble_sort(lista)

def bubble_sort(lista):
    elementos = len(lista)-1
    ordenado = False
    while not ordenado:
        ordenado = True
        for i in range(elementos):
          if lista[i] > lista[i+1]:
               lista[i], lista[i+1] = lista[i+1],lista[i]
               ordenado = False
    print(lista)
    return lista

main()