#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Programa que ler 15 n�mero inteiros e positivos e mostre o maior deles*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont, num, higher_number;
	higher_number = 0;
	
	for(cont=1; cont<=5; cont += 1){
		printf("Digite um n�mero: \n");
		scanf(" %d", &num);
		if(num > higher_number){
			higher_number = num;
		}
	}
	printf("O maior n�mero � %d \n", higher_number);
}
