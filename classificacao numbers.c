#include <stdio.h>
int main(){
	int n1, n2, n3, par, impar, positivos, negativos;
	par = 0;
	impar = 0;
	positivos = 0;
	negativos = 0;
	printf ("Digite 3 numeros: ");
	scanf ("%d %d %d", &n1, &n2, &n3);
	if (n1 % 2 == 0)
		par++;
	if (n2 % 2 == 0)
		par++;
	if (n3 % 2 == 0)
		par++;
	if (n1 % 2 != 0)
		impar++;
	if (n2 % 2 != 0)
		impar++;
	if (n3 % 2 != 0)
		impar++;
	if (n1 > 0)
		positivos++;
	if (n2 > 0)
		positivos++;
	if (n3 > 0)
		positivos++;
	if (n1 < 0)
	{
		++negativos;
	}
	if (n2 < 0)
	{
		++negativos;
	}
	if (n3 < 0)
	{
		++negativos;
	}
	printf ("%d valor(es) par(es)\n", par);
	printf ("%d valor(es) impar(es)\n", impar);
	printf ("%d valor(es) positivo(s)\n", positivos);
	printf ("%d valor(es) negativo(s)\n", negativos);
	return 0;
}
