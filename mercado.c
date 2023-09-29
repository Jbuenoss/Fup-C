#include <stdio.h>
int main(){
	float preco, p2, p3;
	int parcelas;
	printf ("Digite o preco do produto: ");
	scanf ("%f", &preco);
	printf ("Digite o numero de parcelas: ");
	scanf ("%d", &parcelas);
	p2 = preco * 107 / 100;
	p3 = preco * 110 / 100;
	switch(parcelas)
	{
		case 1:
			printf ("O valor do produto continuara %.2f\n", preco);
			printf ("O valor da parcela sera de %.2f\n", preco);
			break;
		case 2: 
			printf ("O valor do produto com o acrescimo eh %.2f\n", p2);
			printf ("O valor da parcelas sera de %.2f\n", p2 / 2);
			break;
		case 3: 
			printf ("O valor do produto com o acrescimo eh %.2f\n", p3);
			printf ("O valor da parcelas sera de %.2f\n", p3 / 3);
			break;
		default:
			printf ("erro!");
			break;
			
	}
	return 0;	
}
