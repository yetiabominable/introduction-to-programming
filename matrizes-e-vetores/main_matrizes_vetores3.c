#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um algoritmo que leia 50 n�meros inteiros e armazene-os em um vetor. 
Copie para um segundo vetor de 50 n�meros inteiros cada elemento do primeiro, observando as seguintes regras:

Se o n�mero for par, preencha a mesma posi��o do segundo vetor com o n�mero sucessor do contido na mesma posi��o do primeiro vetor;
Se o n�mero for �mpar, preencha a mesma posi��o do segundo vetor com o n�mero antecessor do contido na mesma posi��o do primeiro vetor.
Ao final, mostre o conte�do dos dois vetores simultaneamente */

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	const int tamvet = 5;
	int vet[tamvet], vet2[tamvet], cont;
	
	for(cont = 0; cont < tamvet; cont ++){
		scanf(" %d", &vet[cont]);
		if(vet[cont]%2 == 0){
			vet2[cont] = vet[cont] + 1;
		}else{
			vet2[cont] = vet[cont] - 1;
		}
	}
	printf("Elementos de vet1 e vet2: \n");
	for(cont = 0; cont < tamvet; cont ++){
		printf(" %d \n", vet[cont]);
		printf(" %d \n", vet2[cont]);
	}
}

