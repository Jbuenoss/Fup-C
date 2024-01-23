#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    printf("Digite o sal%crio do funcion%crio: ", 225, 225);
    float sal;
    scanf("%f", &sal);
    if(sal < 900)      printf("O novo sal%crio do funcion%crio ser%c de R$%.2f", 225, 225, 225, sal*1.3);
    else    printf("O funcion%crio n%co faz parte do aumento", 225, 227);

    return 0;
}