#include <stdio.h>
#include <string.h>
int main(){
    printf("Digite: ");
    char leitor[100];
    fgets(leitor, 100, stdin);
    int fin = (int)strlen(leitor)-2;
    for(int i = 0; i < (int)strlen(leitor)-1; i++)
        if(leitor[i] != leitor[fin-i]){
            printf("Nao eh um palindromo!");
            return 0;
        }
    printf("Eh um palindromo!");
    return 0;
}