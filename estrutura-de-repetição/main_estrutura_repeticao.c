#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Ler um n�mero e repetir ele 20 vezes*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont, num;
	
	printf("Digite um n�mero: \n");
	scanf(" %d", &num);
	
	for(cont = 1; cont <= 20; cont += 1){
		printf("N�mero lido: %d \n", num);
	}
}
