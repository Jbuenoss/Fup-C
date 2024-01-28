#include <stdio.h>
int main(){
    int n;
    double total = 0;
    printf("Digite a quantidade de inteiros: ");
    scanf("%d", &n);
    printf("Digite os %d inteiros: ", n);
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        total += x;
    }
    printf("A media deu: %.2f", total/n);
    return 0;
}