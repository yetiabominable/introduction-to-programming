#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Calculo da �rea de um tri�ngulo*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura, area;
	
	printf("Informe o valor da base do tri�ngulo: \n");
	scanf(" %f", &base);
	
	printf("Informe o valor da altura do tri�ngulo:");
	scanf("%f", &altura);
	
	area = base * altura / 2;
	
	//Resultado
	printf("A �rea do tri�ngulo equivale � %.2f", area);
}
