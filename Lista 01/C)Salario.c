#include <stdio.h>
#include <locale.h>
int main(){
	float sal, vend;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o sal�rio fixo do funcion�rio: ");
	scanf("%f", &sal);
	printf("Agora digite o valor das vendas do funcion�rio: ");
	scanf("%f", &vend);
	float comm = vend*0.04;
	printf("O funcion�rio vai receber de comiss�o R$%.2f \nSal�rio final � de R$%.2f", comm, comm+sal);	
	return 0;
}
