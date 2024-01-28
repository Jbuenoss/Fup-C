#include <stdio.h>
int main(){
    int vetor[100], atual = 5;
    for(int i = 0; i < 100; i++){
        vetor[i] = atual;
        atual += 5;
    }
    for(int i = 0; i < 100; i++)        printf("%d\n", vetor[i]);
    return 0;
}