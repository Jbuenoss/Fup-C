#include <stdio.h>
void Binario(int n);
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Em base binaria fica: ");
    Binario(n);
    return 0;
}
void Binario(int n){
    if(n/2 > 0)
        Binario(n/2);
    printf("%d", n%2);
}