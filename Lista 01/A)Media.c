#include <stdio.h>
int main(){
	float n1, n2;
	printf("Digite as duas notas: ");
	scanf("%f %f", &n1, &n2);
	printf("A media ponderada deu %.2f", (n1*2 + n2*3)/5);
	return 0;
}
