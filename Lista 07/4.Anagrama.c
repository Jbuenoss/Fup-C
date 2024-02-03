#include <stdio.h>
#include <string.h>
int main(){
    printf("Digite a primeira palavra: ");
    char leitor[100], leitor2[100];
    fgets(leitor, 100, stdin);
    printf("Digite a segunda palavra: ");
    fgets(leitor2, 100, stdin);
    if(strlen(leitor) != strlen(leitor2)){
        printf("nao eh um anagrama!");
        return 0;
    }
    int tam = (int)strlen(leitor)-1;
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(leitor[i] == leitor2[j]){
                leitor[i] = ' ';
                leitor2[j] = ' ';
                break;
            }
            if(j == tam-1){
                printf("nao eh um anagrama!");
                return 0;
            }
        }
    }
    printf("Eh um anagrama!");
    return 0;
}