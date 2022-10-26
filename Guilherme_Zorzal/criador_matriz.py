N = int(input("Tamanho matriz: "))
r = int(input("razao: "))

m = [[0 for c in range(N)] for c in range(N)]
m[0][0] = 1
cont = 0
for c in range(N):
    for d in range(N):
        cont = cont + r
        m[c][d] = cont

for c in range(N):
    for d in range(N):
        print(m[c][d], end = ' ')
    print("\n")
