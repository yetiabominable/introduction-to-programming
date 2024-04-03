#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Desenvolva um programa que leia uma sequ�ncia de n�meros, podendo terminar com o n�mero 0 ou 9. 
Para cada n�mero lido (diferente de 0 ou 9), mostre seu sucessor caso o n�mero seja par, ou seu antecessor se o n�mero for �mpar.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	do{
		printf("Digite um n�mero: \n");
		scanf(" %d", &num);
		if(num != 0 && num != 9){
			if(num%2 == 0){
				printf("Sucessor = %d \n", num + 1);
			}else {
				printf("Antecessor = %d \n", num - 1);
			}
		}
	}
	while(num != 0 && num != 9);
}
