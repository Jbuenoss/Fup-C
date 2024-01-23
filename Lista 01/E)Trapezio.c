#include <stdio.h>
int main(){
    printf("Digite as duas bases do trapezio: ");
    float b1, b2;
    scanf("%f %f", &b1, &b2);
    printf("Agora digite o valor da altura: ");
    float h;
    scanf("%f", &h);
    printf("Area = %.2f", (b1+b2)*h/2);

    return 0;
}