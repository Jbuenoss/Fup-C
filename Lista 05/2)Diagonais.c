#include <stdio.h>
int main(){
	int matriz[4][4];
	printf("Escreva os elementos linha por linha: \n");
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++)
			scanf("%d", &matriz[i][j]);
	printf("Os elementos da diagonal principal: ");
	for(int i = 0; i < 4; i++)		printf("%d ", matriz[i][i]);
	printf("\nOS elementos da diagonal secundaria: ");
	for(int i = 0; i < 4; i++)		printf("%d ", matriz[i][3 - i]);
	return 0;
}
