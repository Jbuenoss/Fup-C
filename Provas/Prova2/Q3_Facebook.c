#include <stdio.h>
int main(){
	int n, i, j, aux;
	printf("Digite a quantidade de usuarios: ");
	scanf("%d", &n);
	int matriz[n][n], quant[n];
	for(i = 0; i < n; i++)
		quant[i] = 0;
	printf("Agora preencha o resto da matriz linha por linha:\n");
	for(i = 0; i < n; i++){
		printf("%d ", i+1);
	}
	printf("\n");
	for(i = 1; i < n; i++)
		for(j = 0; j < n; j++){
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] != 0)
				quant[j]++;
		}
	for(i = 0; i < n-1; i++)
		if(i == 0)
			aux = quant[i];
		else if(quant[i] > aux)
			aux = quant[i];
	printf("O(s) indice(s) com maior numero de usuarios:  ");
	for(i = 0; i < n; i++)
		if(quant[i] == aux)
			printf("%d ", i+1);
	return 0;
}
