#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[4][4], i, j;
	printf("Escreva os elementos linha por linha: \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("Os elementos da diagonal principal s�o: ");
	for(i = 0; i < 4; i++){
		printf("%d ", matriz[i][i]);
	}
	printf("\nOS elementos da diagonal secund�ria s�o: ");
	for(i = 0; i < 4; i++){
		printf("%d ", matriz[i][3 - i]);
	}
	return 0;
}
