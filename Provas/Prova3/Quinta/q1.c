#include <stdio.h>
int vetorret[5];
void ord(int vetor[]){
    int i, j, aux;
    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }
}
int main(){
    int i;
    int vetorlei[5];
    printf("Digite 5 numeros: ");
    for(i = 0; i < 5; i++)      scanf("%d", &vetorlei[i]);
    ord(vetorlei);
    printf("O valor minimo eh %d\n", vetorlei[0]);
    printf("O valor maximo eh %d\n", vetorlei[4]);
    printf("A mediana eh %d\n", vetorlei[2]);
    return 0;
}