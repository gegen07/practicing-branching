#include <bits/stdc++.h>
using namespace std;


/* Código baseado em https://www.geeksforgeeks.org/bubble-sort/ */

void bubbleSort(int *vetor, int n){
	int i, j;
	for (i = 0; i < n - 1; i++){
		for (j = 0; j < n - i - 1; j++){
			if (vetor[j] > vetor[j + 1]){
				swap(vetor[j], vetor[j + 1]);
          }
        }
    }
}

int main(){
	int vetor[] = {100, 13, 50, 21, 18, 5, 1, 4, 2, 8, 13};
	int N = sizeof(vetor) / sizeof(vetor[0]);
	bubbleSort(vetor, N);
	cout << "Ordenado: \n";
	for (int i = 0; i < N; i++)
		cout << vetor[i] << " ";
	cout << endl;
}
