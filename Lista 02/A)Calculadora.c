#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	int opcao;
	printf ("Digite dois n%cmeros: ", 250);
	scanf ("%f %f", &n1, &n2);
	printf ("Agora digite a opera%c%co que deseja realizar: \n", 231, 227);
	printf ("1: M%cdia entre os numeros digitados\n", 233);
	printf ("2: Diferen%ca do maior pelo menor\n", 231);
	printf ("3: Produto entre os n%cmeros digitados\n", 250);
	printf ("4: Divis%co do primeiro pelo segundo n%cmero\n", 227, 250);
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
