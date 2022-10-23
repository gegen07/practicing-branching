v = [5, 6, 7, 8, 9, 10]
soma = []
soma.append(v[0])

for i in range(len(v)-1):
    soma.append(soma[i] + v[i+1])

print(soma)
