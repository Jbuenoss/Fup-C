#include <stdio.h>
int main(){
    printf("Digite o valor do saldo medio: ");
    float saldo;
    scanf("%f", &saldo);
    if(saldo > 400.0)       printf("Com saldo medio de %.2f voce tem direito a R$%.2f de credito", saldo, saldo*0.3);
    else if(saldo > 300.0)    printf("Com saldo medio de %.2f voce tem direito a R$%.2f de credito", saldo, saldo*0.25);
    else if(saldo > 200.0)    printf("Com saldo medio de %.2f voce tem direito a R$%.2f de credito", saldo, saldo*0.2);
    else        printf("Com saldo medio de %.2f voce tem direito a R$%.2f de credito", saldo, saldo*0.1);

    return 0;
}