#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a, no emulador a seguir, um algoritmo que leia dados e armazene em uma matriz 3x3 de n�meros inteiros. 
Em seguida, mostre os elementos que sejam iguais ao maior n�mero armazenado na matriz.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][3], linha, coluna, maior = 0, igual = 0;
	
	for(linha = 0; linha < 3; linha ++){
		for(coluna = 0; coluna < 3; coluna ++){
			printf("Elemento [%d][%d] = \n", linha, coluna);
			scanf(" %d", &mat[linha][coluna]);
			if(mat[linha][coluna] > maior){
				maior += mat[linha][coluna];
			}
		}
	}
	for(linha = 0; linha < 3; linha ++){
		for(coluna = 0; coluna < 3; coluna ++){
			if(mat[linha][coluna] == maior){
				igual++;
			}
		}
	}
	printf("Maior: %d \n", maior);
	printf("Igual: %d \n", igual);
}
