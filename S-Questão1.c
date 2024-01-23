#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("Digite alguma frase: ");
	fgets(str, 100, stdin);
	for(int i = 0; i < strlen(str); i++){
		if(str[i] >= 'a' && str[i] <= 'z')	str[i] = toupper(str[i]);
		else str[i] = tolower(str[i]);
	}
	printf("%s", str);
	return 0;
}
