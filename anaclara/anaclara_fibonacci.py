def main():
    n = int(input("Digite o número de termos da série\n"))
    fibonacci(n)


def fibonacci(n):
    t1 = 0
    t2 = 1
    t3 = 0
    for i in range(n):
        print("{} ".format(t1), end="")
        t3 = t1 + t2
        t1 = t2
        t2 = t3

main()

