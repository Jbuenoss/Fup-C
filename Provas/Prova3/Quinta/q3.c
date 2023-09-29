#include <stdio.h>
#include <string.h>
char lrep[100];

void contador(char c, char fras[]){
int k, cl = 0;
for(k = 0; k < strlen(fras); k++){
    if(c == toupper(fras[k]) || c == tolower(fras[k])){
        cl++;
    }
}
    int ver = 1;
    for(k = 0; k < strlen(lrep); k++){
        if(c == lrep[k]){
            ver = 0;
            break;
        }
    }
    if(ver = 1)     printf("A letra %c foi repetida %d vezes\n", c, cl);
}
int main(){
    int i, j, k, cl, i2;
    char frase[100], letrasrep[50];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    for(i = 0.; i < strlen(frase); i++){
        for(j = i+1; j < strlen(frase); j++){
            if((frase[i] == toupper(frase[j]) || frase[i] == tolower(frase[j])) && frase[i] != ' ' && frase[i] != '#'){
                contador(frase[i], frase);
                char aux = frase[i];
                for(i2 = 0; i2 < strlen(frase); i2++){
                    if((frase[i2] == toupper(aux) || frase[i2] == tolower(aux))){
                        frase[i2] = '#';
                    }
                }
            }
        }
    }
    return 0;
}
