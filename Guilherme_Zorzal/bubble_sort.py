n = int(input("Digite valor n:"))
vet = []
for c in range(n):
    vet.append(int(input()))

while(1):
    cont = 0
    for c in range(1,n):
        if vet[c-1] > vet[c]:
            aux = vet[c-1]
            vet[c-1] = vet[c]
            vet[c] = aux
            cont = 1
    if cont == 0:
        break

print("Lista ordenada: ")
for c in range(n):
    print(vet[c])
