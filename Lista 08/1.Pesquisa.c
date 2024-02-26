#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
struct habitante{
	float sal;
	int idade;
	char sexo;
	int filhos;
};
int main(){
	setlocale(LC_ALL,"portuguese");
	printf("----------------------Pesquisa de Fortaleza---------------------------\n");
	printf("Digite o n%cmero de habitantes pesquisados: ", 250);
	int n, somafil = 0, cm = 0, cms = 0;
	float somasal = 0.0f, maiorsal = 0.0f;
	scanf("%d", &n);
	struct habitante pessoas[n];
	system("cls");
	for(int i = 0; i < n; i++){
		printf("----------------------Pesquisa de Fortaleza---------------------------\n");
		printf("Entrevistado %d\n", i+1);
		printf("Digite o seu sal%crio: ", 225);
		scanf("%f", &pessoas[i].sal);
		maiorsal = (pessoas[i].sal > maiorsal) ? pessoas[i].sal : maiorsal;
		
		somasal += pessoas[i].sal;
		printf("Digite a sua idade: ");
		scanf("%d", &pessoas[i].idade);
		printf("Digite o seu sexo M(Masculino)/F(Feminino): ");
		scanf(" %c", &pessoas[i].sexo);

		if(pessoas[i].sexo == 'F'){
			cm++;
			if(pessoas[i].sal > 10000)
				cms++;
		}
		printf("Digite quantos filhos voce tem: ");
		scanf("%d", &pessoas[i].filhos);
		somafil += pessoas[i].filhos;
		system("cls");
	}
	printf("A m%cdia dos salarios ficou como %.2f", 233, somasal/n);
	printf("\nA m%cdia do numero de filhos ficou como %.2f", 233, somafil/n);
	printf("\nO maior salario foi de %.2f", maiorsal);
	if(cm == 0)
		printf("nao teve mulher na pesquisa");
	else
		printf("\nA porcentagem de mulheres que ganham mais que 10000 e de %.2f", (cms*100)/(float)cm);
	return 0;
}
