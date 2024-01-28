#include <stdio.h>
int main(){
    int vetor[10], atual = 0;
    for(int i = 1; i < 20; i += 2){
        vetor[atual] = i*i;
        atual++;
    }
    for(int i = 0; i < 10; i++)        printf("%d\n", vetor[i]);
    return 0;
}