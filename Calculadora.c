#include <stdio.h>
int main(){
	float n1, n2;
	int opcao;
	printf ("Digite dois numeros: ");
	scanf ("%f %f", &n1, &n2);
	printf ("Agora digite a operacao que deseja realizar: \n");
	printf ("1: Media entre os numeros digitados\n");
	printf ("2: Diferenca do maior pelo menor\n");
	printf ("3: Produto entre os numeros digitados\n");
	printf ("4: Divisao do primeiro pelo segundo numero\n");
	scanf ("%d", &opcao);
	switch(opcao){
		case 1:
			printf ("A media vale %.2f", (n1 + n2) / 2);
			break;
		case 2:
			if (n1 > n2)
				printf ("A diferenca do maior pelo menor vale %.2f", n1 - n2);
			else
				printf ("A diferenca do maior pelo menor vale %.2f", n2 - n1);
			break;	
		case 3: 
			printf ("O produto vale %.2f", n1 * n2);	
			break;
		case 4: 
			if (n2 == 0)
				printf ("eh uma indeterminacao");
			else
				printf ("A divisao do primeiro pelo segundo eh %.2f", n1 / n2);
			break;
		default:
			printf ("nenhuma opcao valida digitada");
			break;
	}
	return 0;
}
