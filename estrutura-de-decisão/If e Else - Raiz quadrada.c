#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Calcular a raiz quadrada e informa se ela � uma raiz quadrada perfeita ou n�o*/
void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int number, square;
	
	printf("Digite um n�mero inteiro: \n");
	scanf(" %d", &number);
	
	square = sqrt(number);
	
	if(square * square == number){
		printf("Esse n�mero � uma raiz quadrada perfeita!");
	}else{
		printf("Esse n�mero n�o � uma raiz quadrada perfeita!");
	}
}
