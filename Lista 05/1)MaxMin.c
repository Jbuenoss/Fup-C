#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[6][3], maior, menor;
	printf("Escreva os elementos da matriz linha por linha:\n");
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", &matriz[i][j]);
			if(i == 0 && j == 0){
				maior = menor = matriz[0][0];
			}
			if(matriz[i][j] > maior)	maior = matriz[i][j];
			if(matriz[i][j] < menor)	menor = matriz[i][j];
		}
	}
	printf("O maior da matriz eh %d e o menor eh %d", maior, menor);
	return 0;
}
