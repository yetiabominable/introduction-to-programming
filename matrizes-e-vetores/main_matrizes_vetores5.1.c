#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fa�a um algoritmo que leia 50 n�meros inteiros e armazene-os em um vetor. 
Na sequ�ncia, leia uma lista de 10 n�meros inteiros e verifique se cada um deles est� contido em alguma posi��o do vetor. 
Em caso positivo, mostre a posi��o do vetor em que ele se encontra.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	const int tamvet = 5, tamlist = 10;
	int vet[tamvet], cont, posvet, achou, num;
	
	printf("Digite os dados do vetor: \n");
	
	for(cont = 0; cont < tamvet; cont ++){
		scanf(" %d", &vet[cont]);
		printf("Digite n�meros a procurar: \n");	
	}
	for (cont = 1; cont <= 10; cont ++){
		scnf(" %d", &num);
	}
	//verifica se o n�mero est� no vetor
	posvet = 0; 
	achou = 0;
	while(posvet <= -1 && achou == 0){
		if(num == vet[posvet]){
			achou = 1;
		}else{
			posvet ++;
		}
	}
	if(achou == 1){
		printf("Achou uma posi��o: %d \n", posvet);
	}else{
		printf("N�o achou o n�mero \n");
	}
}
