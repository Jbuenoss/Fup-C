#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[6][3], c = 0, maior, menor, i, j;
	printf("Escreva os elementos da matriz linha por linha:\n");
	for(i = 0; i < 6; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &matriz[i][j]);
			if(c == 0){
				maior = matriz[i][j];
				menor = matriz[i][j];
			}
			c++;
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
			}
			if(matriz[i][j] < menor){
				menor = matriz[i][j];
			}
		}
	}
	printf("O maior da matriz é %d e o menor é %d", maior, menor);
	return 0;
}
