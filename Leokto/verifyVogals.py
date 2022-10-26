import math
palavra = str(input().lower())
soma = 0
for c in range(len(palavra)):
    if palavra[c] == "a" or palavra[c] =="e" or palavra[c] == "i" or palavra[c] == "o" or palavra[c] == "u":
        soma += 1
porcen = (soma * 100)/len(palavra)
print("{:.0f}%".format(math.floor(porcen)))
