#include <stdio.h>
int main(){
	char frase[500];
	fgets(frase, 500, stdin);
	int c = 1, i;
	for(i = 0; i < strlen(frase); i++)
		if(frase[i] == ' ')
			c++;	
	printf("A frase tem %d palavras", c);
	return 0;
}
