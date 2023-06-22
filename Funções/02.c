#include <stdio.h>
int fibo(int a){
    if(a == 1 || a == 2)
        return 1;
    else 
        return fibo(a-1) + fibo(a-2);
}

int fibon(int a){
    long long int n1 = 1, n2 = 1, n3;
    if (a == 1 || a == 2)
        return 1;
    else{
        for(;a != 2; a--){
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            printf("%lld ", n3);
        }
    }
}
int main(){
    int n;
    printf("Digite o numero do termo: ");
    scanf("%d", &n);
    fibon(n);
    printf("\n");





    return 0;
}