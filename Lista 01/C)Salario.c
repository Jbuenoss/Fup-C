#include <stdio.h>
#include <locale.h>
int main(){
	float sal, vend;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o salário fixo do funcionário: ");
	scanf("%f", &sal);
	printf("Agora digite o valor das vendas do funcionário: ");
	scanf("%f", &vend);
	float comm = vend*0.04;
	printf("O funcionário vai receber de comissão R$%.2f \nSalário final é de R$%.2f", comm, comm+sal);	
	return 0;
}
