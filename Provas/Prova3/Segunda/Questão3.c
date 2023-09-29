#include <stdio.h>
#include <string.h>
//ta com erro de escolae ter algo apos colado.
int main(){
	int i, j = 0, c = 0;
	char frase[100], palavra[100];
	printf("Digite a frase abaixo:\n");
	fgets(frase, 100, stdin);
	printf("Agora digite a palavra: ");
	scanf("%s", palavra);
	for(i = 0; i < strlen(frase); i++){
		if(frase[i] == toupper(palavra[0]) || frase[i] == tolower(palavra[0])){
			if(strnicmp(&frase[i], palavra, strlen(palavra)) == 0){
				if(i == 0 || frase[i-1] == ' ' )
					c++;
				if(i == 0 && frase[strlen(palavra)] != ' ')
					c--;
			}
		}
	}
	printf("A palavra se repete %d vez(es)\n", c);
	return 0;
}
