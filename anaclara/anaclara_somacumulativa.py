n = int(input("tamanho da lista\n"))
lista = []
lista_soma = []
soma = 0
for i in range (n):
    numero = int(input("digite o numero\n"))
    lista.append(numero)
    soma += lista[i]
    if (i == 0):
        lista_soma.append(numero)
    else:
        lista_soma.append(soma)
print(lista)
print(lista_soma)

