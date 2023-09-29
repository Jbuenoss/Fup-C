#include <stdio.h>
struct os{
	int ord_ser;
	int dia;
	int mes;
	int ano;
	float valor;
	int cliente;
}oficina[5];
int main(){
	int i, mvind;
	float somaval = 0;
	for(i = 0; i < 5; i++){
		printf("Ordem de servico %d", i+1);
		printf("\nDigite o numero da ordem do servico: ");
		scanf("%d", &oficina[i].ord_ser);
		printf("Digite o dia, mes e ano respectivamente: ");
		scanf("%d %d %d", &oficina[i].dia, &oficina[i].mes, &oficina[i].ano);
		printf("Digite o valor: ");
		scanf("%f", &oficina[i].valor);
		somaval += oficina[i].valor;
		printf("Digite o codigo do cliente: ");
		scanf("%d", &oficina[i].cliente);
		if(i == 0)		mvind = 0;
		else if(oficina[i].valor > oficina[mvind].valor)	mvind = i;
	}
	printf("\nA media dos valores ficou como %.2fR$", somaval/5);
	printf("\nO codigo do cliente que realizou o servico mais caro foi %d que realizou um servico de %.2f", oficina[mvind].cliente, oficina[mvind].valor);
	return 0;
}

