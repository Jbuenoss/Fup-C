#include <stdio.h>
struct dados{
    char sexo;
    float horas;
}escola[10];
int main(void){
    int i, cm = 0, cf = 0;
    float spm = 0, spf  = 0;
    for(i = 0; i < 10; i++){
        printf("Professor %d\n", i+1);
        printf("Digite o sexo do professor (M - Masculino; F - Feminino): ");
        scanf(" %c", &escola[i].sexo);
        printf("Agora digite quantas aulas/horas o professor(a) deu: ");
        scanf("%f", &escola[i].horas);
        printf("\n");
        if(escola[i].sexo == 'M'){
            spm += (escola[i].horas * 12.5);
            cm++;
        }
        else{  
            spf += (escola[i].horas * 12.5);
            cf++;
        }
    }
    printf("O salario medio dos professores homens ficou como %.2f", spm/cm);
    printf("\nO salario medio das professoras ficou como %.2f\n", spf/cf);
    return 0;
}