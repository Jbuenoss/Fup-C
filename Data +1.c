#include <stdio.h>
int main(){
	int dia, mes, ano;
	printf ("Digite a data: ");
	scanf ("%d %d %d", &dia, &mes, &ano);
	if (dia == 28 && mes == 2){
		dia = 1;
		mes++;
		printf ("%d %d %d", dia, mes, ano);
	}
	else if ((dia == 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10)){
		dia = 1;
		mes++;
		printf ("%d %d %d", dia, mes, ano);
	}	
	else if ((dia == 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){
		dia = 1;
		mes++;
		printf ("%d %d %d", dia, mes, ano);
	}	
	else if ((dia == 31) && (mes == 12)){
		dia = 1;
		mes = 1;
		ano++;
		printf ("%d %d %d", dia, mes, ano);
	}
	else
	{
		dia++;
		printf ("%d %d %d", dia, mes, ano);
	}	
	return 0;
}
