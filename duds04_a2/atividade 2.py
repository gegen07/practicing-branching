v = input().split(" ")
soma = 0
cond = 1

for i in range(len(v)):
    v[i] = int(v[i])


for i in range(1, len(v)):
    soma = v[i] + v[i-1]
    v[i] = soma

for i in v:
    print(i, end=" ")
