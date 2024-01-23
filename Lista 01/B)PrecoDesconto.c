#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite o pre�o do produto: ");
	float n;
	scanf("%f", &n);
	printf("O pre�o do produto com 10 porcento de desconto ficou: R$%.2f", n*0.9);
	return 0;
}
