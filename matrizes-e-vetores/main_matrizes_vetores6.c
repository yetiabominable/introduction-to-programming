#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* em uma turma com 50 alunos, cada um faz 3 provas por semestre.

Al�m de armazenar as 3 provas dos 50 alunos, existe a necessidade de mostrar:

A m�dia de cada prova;
A m�dia de cada aluno;
A m�dia da turma. */

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	const int tamvet = 2;
	int cont;
	float prova1[tamvet], prova2[tamvet], prova3[tamvet],media_prova1, media_prova2, media_prova3, media_aluno, media_turma, soma1 = 0, soma2 = 0, soma3 = 0;
	
	for(cont = 0; cont < tamvet; cont ++){
		scanf(" %f", &prova1[cont]);
		soma1 += prova1[cont];
	}
	media_prova1 = soma1 / tamvet;
	printf("A m�dia da prova1 �: %.2f \n", media_prova1);
	for(cont = 0; cont < tamvet; cont ++){
		scanf(" %f", &prova2[cont]);
		soma2 += prova2[cont];
	}
	media_prova2 = soma2 / tamvet;
	printf("A m�dia da prova2 �: %.2f \n", media_prova2);
	for(cont = 0; cont < tamvet; cont ++){
		scanf(" %f", &prova3[cont]);
		soma3 += prova3[cont];
	}
	media_prova3 = soma3 / tamvet;
	printf("A m�dia da prova3 �: %.2f \n", media_prova3);
	
	
	for(cont = 0; cont < tamvet; cont ++){
		media_aluno = (prova1[cont] + prova2[cont] + prova3[cont]) / 3;
	}
	printf("A m�dia do aluno �: %.2f \n", media_aluno);
	media_turma = (media_prova1 + media_prova2 + media_prova3) / 3;
	printf("A m�dia da turma �: %.2f \n", media_turma);
}


