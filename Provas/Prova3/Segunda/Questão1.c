#include <stdio.h>
int vetorB[10];
int fator(int vetorA[]){
	int i, j;
	for(i = 0; i < 10; i++){
		for(j = 1; j <= vetorA[i]; j++){
			vetorB[i] *= j;
		}
	}
}
int main(){
	int conj[10], i;
	printf("Digite 10 valores: ");
	for(i = 0; i < 10; i++)		scanf("%d", &conj[i]);
	for(i = 0; i < 10; i++)		vetorB[i] = 1;
	fator(conj);
	for(i = 0; i < 10; i++)		printf("%d ", vetorB[i]);
	return 0;
}
