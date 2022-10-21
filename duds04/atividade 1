v = input().split(" ")
guarda = -1
cond = 1

for i in range(len(v)):
    v[i] = int(v[i])


while(cond):
    cond = 0
    for i in range(len(v)-1):
        if(v[i]>v[i+1]):
            guarda = v[i]
            v[i] = v[i+1]
            v[i+1] = guarda
            cond = 1

for i in v:
    print(i, end=" ")
