#include <stdio.h>
#include <string.h>
#include <locale.h>
struct habitante{
	float sal;
	int idade;
	char sexo;
	int filhos;
};
int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Pesquisa de Fortaleza\n");
	int i, somafil = 0, cm = 0, cms = 0;
	float somasal = 0, maiorsal;
	struct habitante pessoas[20];
	for(i = 0; i < 20; i++){
		printf("Entrevistado %d\n", i+1);
		printf("Digite o seu sal�rio: ");
		scanf("%f", &pessoas[i].sal);
		if(i == 0)	maiorsal = pessoas[i].sal;
		else if(pessoas[i].sal > maiorsal) 	maiorsal = pessoas[i].sal;
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
		printf("Digite quantos filhos voc� tem: ");
		scanf("%d", &pessoas[i].filhos);
		somafil += pessoas[i].filhos;
	}
	printf("A m�dia dos sal�rios ficou como %.2f", somasal/20);
	printf("\nA m�dia do n�mero de filhos ficou como %.2f", somafil/20.0);
	printf("\nO maior sal�rio foi de %.2f", maiorsal);
	float aux = (float)cms/cm;
	printf("\nA porcentagem de mulheres que ganham mais que 10000 � de %.2f", (cms*100)/(float)cm);
	return 0;
}
