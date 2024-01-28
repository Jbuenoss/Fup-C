#include <stdio.h>
int main(){
    int vetor[100], atual = 200;
    for(int i = 0; i < 101; i++){
        vetor[i] = atual;
        atual--;
    }
    for(int i = 0; i < 101; i++)        printf("%d\n", vetor[i]);
    return 0;
}