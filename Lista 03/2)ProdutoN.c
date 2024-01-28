#include <stdio.h>
int main(){
    long long res = 1;
    int n;
    char resp;
    do{
        printf("Digite um numero: ");
        scanf("%d", &n);
        res *= n;
        printf("Voce deseja continuar a colocar numeros (sim = S)? ");
        scanf(" %c", &resp);
    }while(resp == 'S');
    printf("%lld", res);
    return 0;
}