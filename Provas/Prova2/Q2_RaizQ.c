#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int n, d = 1;
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	while(n > 0){
		n -= d;
		d += 2;
	}
	if(n == 0)
		printf("%d � a raiz exata", d/2);
	else
		printf("%d � a raiz aproximada", d/2);	
	return 0;
}
