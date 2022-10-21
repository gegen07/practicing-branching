v = [1, 4, 6, 2, 3 , 5]

trocou = 1
while(trocou):
    trocou = 0
    for i in range(len(v)-1):
        if v[i] > v[i+1]:
            aux = v[i]
            v[i] = v[i+1]
            v[i+1] = aux
            trocou = 1
            
print(v)
