#include <stdio.h>
int main(){
	int n, i, j, aux;
	printf("Digite a quantidade de usuarios: ");
	scanf("%d", &n);
	int matriz[n][n], quant[n];
	for(i = 0; i < n; i++)
		quant[i] = 0;
	printf("Agora digite os elementos da matriz linha por linha:\n");
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &matriz[i][j]);
	for(i = 1; i < n; i++)
		for(j = 0; j < n; j++)
			if(matriz[i][j] != 0)
				quant[j]++;
	for(i = 0; i < n-1; i++)
		for(j = i+1; j < n; j++)
			if(quant[i] > quant[j]){
				aux = quant[j];
				quant[j] = quant[i];
				quant[i] = aux;
			}
	printf("O(s) indice(s) com maior numero de usuarios:  ");
	for(i = 0; i < n; i++)
		if(quant[i] == quant[n-1])
			printf("%d ", i+1);
	return 0;
}

