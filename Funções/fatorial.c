#include <stdio.h>
int fatorial(int a){
    if(a == 1)
        return 1;
    else 
        return a*fatorial(a-1);
}

int main(){
    int n;
    printf("Digite o numero que quer a fatorial: ");
    scanf("%d", &n);
    printf("O resulatado: %d\n", fatorial(n));
    return 0;
}