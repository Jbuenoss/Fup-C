#include <stdio.h>
#include <locale.h>
void suc(int a, int b){
	int i, res = 0;
	for(i=1; i<=b; i++){
		printf("%d ", a);
		res += a;
		if(i != b)
			printf("+ ");
	}
	printf("= %d\n", res);
}
int main(){
	setlocale(LC_ALL,"portuguese");
	int n1, n2;
	printf("Digite dois números: ");
	scanf("%d %d", &n1, &n2);
	suc(n1, n2);
	return 0;
}

