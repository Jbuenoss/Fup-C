#include <stdio.h>
int somar(int a, int b);
int main(){
	int a, b;
	printf("Digite dois numeros: ");
	scanf("%d %d", &a, &b);
	printf("%d\n", somar(a, b));
	return 0;
}
int somar(int c, int d){
	if(d>0){
		d--;
		c++;
		return somar(c, d);
	}
	else
		return c;
}
