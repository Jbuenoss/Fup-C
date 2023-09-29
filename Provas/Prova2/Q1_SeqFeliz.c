#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int n, i, sub = 1, j;
	printf("Digite o tamanho da sequência: ");
	scanf("%d", &n);
	int seq[n], dif[n - 1];
	printf("Agora digite os valores da sequência: \n");
	for(i = 0; i < n; i++){
		scanf("%d", &seq[i]);
	}
	for(i = 0; i < n-1; i++){
		if(seq[i] - seq[i + 1] > 0){
			dif[i] = seq[i] - seq[i+1];
		}
		else
			dif[i] = seq[i+1] - seq[i];
	}
	for(j = 0; j < n-1; j++){
		for(i = 0; i < n-1; i++){
			if(dif[i] == sub){
				sub++;
				break;
			}
		}
	}	
	if(sub == n){
		printf("Feliz");
	}
	else
		printf("Não Feliz");
	return 0;
}
