#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Desenvolva um programa que leia 15 n�meros inteiros e positivos e mostre o maior deles.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, maior, cont;
	maior = 0;
	cont = 1;
	while (cont <= 5){
		printf("Digite um n�mero: \n");
		scanf(" %d", &num);
		if(num > maior){
			maior = num;
		}
		cont++;
	}
	printf("O maior n�mero = %d \n", maior);
}
