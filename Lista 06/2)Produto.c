#include <stdio.h>
#include <locale.h>
int suc(int a, int b){
	if(b == 0)
		return 0;
	return a + suc(a, b-1);
}
int main(){
	setlocale(LC_ALL,"portuguese");
	int n1, n2;
	printf("Digite dois n%cmeros: ", 250);
	scanf("%d %d", &n1, &n2);
	printf("O produto deu: %d", suc(n1, n2));
	return 0;
}