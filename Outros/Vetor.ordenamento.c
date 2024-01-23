#include <stdio.h>
int main(){
	int n, i, j, aux;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	int vetor[n];
	printf("Agora digite os valores do vetor: ");
	for(i = 0; i < n; i++)
		scanf("%d", &vetor[i]);
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(vetor[i] > vetor[j]){
				aux= vetor[j];
				vetor[j] = vetor[i];
				vetor[i] = aux; 
			}
		}
	}
	printf("O Vetor ordenado de forma crescente fica: ");
	for(i = 0; i < n; i++)
		printf("%d ", vetor[i]);
	return 0;
}

