#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	int i;
	printf("Digite alguma frase: ");
	fgets(str, 100, stdin);
	for(i = 0; i < strlen(str); i++){
		if(str[i] >= 'a' && str[i] <= 'z')	str[i] = toupper(str[i]);
		else str[i] = tolower(str[i]);
	}
	printf("%s", str);
	return 0;
}
