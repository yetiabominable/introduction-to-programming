#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a m�dia aritm�tica e a situa��o de aprova��o de cada aluno. 
Lembre-se de que apenas a m�dia igual ou acima de 7 aprova o aluno.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	int cont;
	float average, grade1, grade2, grade3;
	cont = 1;
	while(cont <= 40){
		printf("Digite sua nota 1: \n");
		scanf("%f", &grade1);
		
		printf("Digite sua nota 2: \n");
		scanf("%f", &grade2);
		
		printf("Digite sua nota 3: \n");
		scanf("%f", &grade3);
		
		average = (grade1 + grade2 + grade3) / 3;
		
		if(average >= 7){
			printf("Sua m�dia � %.2f. Aluno aprovado! \n\n", average);
		}else{
			printf("Sua m�dia � %.2f. Aluno reprovado! \n\n", average);
		}
		cont++;
	}
	
		
}
