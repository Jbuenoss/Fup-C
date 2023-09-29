#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	char pali1[100], pali2[100];
	int i, ult;
	printf("Digite uma palavra: ");
	scanf("%s", pali1);
	ult = strlen(pali1) - 1;
	for(i = 0; i < strlen(pali1); i++){
		pali2[i] = pali1[ult];
		ult--;
	}
	if(stricmp(pali1, pali2) == 0)	printf("é um palíndromo\n");
	else	printf("Não é um palíndromo\n");
	return 0;
}
