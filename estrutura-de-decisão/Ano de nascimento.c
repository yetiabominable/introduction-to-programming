#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*Ano de nascimento*/
#define current_year 2022
#define vaccine_age 10
void main (){
	setlocale(LC_ALL, "Portuguese");
	
	int age, month, current_month;
	
	printf("Digite  a sua idade: \n");
	scanf(" %d", &age);
	
	printf("Digite o seu m�s de nascimento: \n");
	scanf(" %d", &month);
	
	printf("Qual o m�s em que voc� se encontra: \n");
	scanf(" %d", &current_month);
	
	if(month <= current_month){
		printf("Voc� nasceu no ano de %d \n", current_year - age);
	}else{
		printf("Voc� nasceu no ano de %d \n", current_year - age - 1);
	}
	if(age < vaccine_age){
		printf("Voc� n�o se encontra na faixa para ser vacinado(a)! \n");
	}else{
		printf("Voc� se encontra na faixa para ser vacinado(a)! \n");
	}
}
