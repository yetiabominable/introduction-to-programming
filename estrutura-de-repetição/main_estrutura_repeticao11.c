#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fa�a um programa que leia uma seque^ncia de nu�meros inteiros, terminada em zero e mostre cada nu�mero lido (exceto o zero).*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;	
	do {
		printf("Digite um n�mero: \n");
		scanf(" %d", &num);
		if(num != 0){
			printf("O n�mero = %d \n", num);
		}
	}
	while(num != 0);
}
