#include <stdio.h>
int main(){
    int matriz[4][4];
    printf("Escreva os elementos linha por linha: \n");
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            scanf("%d", &matriz[i][j]);
    printf("todos os elementos exceto a diagonal principal: ");
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            if(i != j)      printf("%d ", matriz[i][j]);   
    printf("\ntodos os elementos exceto a diagonal secundaria: ");
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            if(j != 3-i)      printf("%d ", matriz[i][j]);
    return 0;
}