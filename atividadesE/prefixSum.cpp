#include <bits/stdc++.h>
using namespace std;

/* Código retirado de https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/*/

void SomaPrefixo(int vetor[], int n, int vetorSoma[])
{
	vetorSoma[0] = vetor[0];
	for (int i = 1; i < n; i++)
		vetorSoma[i] = vetorSoma[i - 1] + vetor[i];
}

int main()
{
	int vetor[] = { 10, 4, 16, 20, 13, 50, 21, 18, 100 };
	int n = sizeof(vetor) / sizeof(vetor[0]);
	int vetorSoma[n];

	SomaPrefixo(vetor, n, vetorSoma);

	for (int i = 0; i < n; i++)
		cout << vetorSoma[i] << " ";
}

