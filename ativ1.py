vector = [1,402,204,2,40,4,5,603,5,7,5,7,4,2,5,793,29,3492,29] 
tam = len(vector) 
for i in range(tam): 
    for j in range (tam-1): 
        if vector[j] > vector[j+1]: 
            temp = vector[j] 
            vector[j] = vector[j+1] 
            vector[j+1] = temp 
print(vector)
