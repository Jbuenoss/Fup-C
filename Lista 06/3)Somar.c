#include <stdio.h>
int somar(int a, int b);
int main(){
	int a, b;
	printf("Digite dois numeros: ");
	scanf("%d %d", &a, &b);
	printf("Resultado da soma deu: %d\n", somar(a, b));
	return 0;
}
int somar(int c, int d){
	if(d == 0)
		return c;
	return 1 + somar(c, d-1);
}
