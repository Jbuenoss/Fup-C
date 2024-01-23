#include <stdio.h>
#include <locale.h>
int main(){
    float peso;
    setlocale(LC_ALL, "portuguese");
    printf("Digite o seu peso em KG: ");
    scanf("%f", &peso);
    printf("O seu peso %c %.2fg", 233, peso*100);
    return 0;
}