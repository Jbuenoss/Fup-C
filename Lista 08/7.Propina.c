#include <stdio.h>
#include <stdlib.h>

struct politico{
    char nome[100];
    char sigla[10];
};
struct propina{
    char data[10];  //formato: dd/mm/yyyy
    double preco;
    char descricao[100];
    struct politico politico;
};

typedef struct propina propina;

int main(){
    int n, loc = 0;
    double maior = 0;
    printf("------------------Cadastro de propinas----------------");
    printf("\nDigite a quantidade de propinas que deseja cadastrar: ");
    scanf("%d", &n);
    propina prop[n];
    system("cls");
    for(int i = 0; i < n; i++){
        printf("Propina %d", i+1);
        printf("\nDigite a data de pagamento: ");
        scanf("%s", prop[i].data);
        printf("Digite o valor: ");
        scanf("%lf", &prop[i].preco);
        if(prop[i].preco > maior){
            maior = prop[i].preco;
            loc = i;
        }
        getchar();
        printf("Digite a descricao: ");
        fgets(prop[i].descricao, 100, stdin);
        printf("Digite o nome do politico: ");
        fgets(prop[i].politico.nome, 100, stdin);
        printf("Digite o nome do partido do politico: ");
        fgets(prop[i].politico.sigla, 10, stdin);
        system("cls");
    }
    printf("-----------------Dados da maior propina--------------- ");
    printf("\ndata: %s", prop[loc].data);
    printf("\npreco: %.2lf", prop[loc].preco);
    printf("\ndescricao: %s", prop[loc].descricao);
    printf("nome do politico: %s", prop[loc].politico.nome);
    printf("sigla do partido: %s\n", prop[loc].politico.sigla);

    return 0;
}