vector=[5,6, 7, 8, 9, 10]
newV=[vector[0]]
for i in range(1,len(vector)):
    newV.append(newV[i-1]+vector[i])
print(newV)