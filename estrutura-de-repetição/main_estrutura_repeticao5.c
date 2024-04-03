#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* programa que leia, inicialmente, a porcentagem de reajuste dos sal�rios dos funcion�rios de uma empresa.
 Na sequ�ncia, deve ler o sal�rio de cada um dos 50 funcion�rios, calcular e mostrar o novo sal�rio reajustado, 
 aplicando a porcentagem de ajuste sobre os respectivos sal�rios atuais. 
 Ao final, o maior sal�rio reajustado da empresa deve ser apresentado na tela.*/
 
 void main(){
	setlocale(LC_ALL, "Portuguese");
	
 	int cont;
 	float percent, salary, readjusted_salary, higher_salary;
 	
 	printf("Digite a porcentagem de reajuste: \n");
 	scanf(" %f", &percent);
 	
 	higher_salary = 0;
 	
 	for(cont = 1; cont <= 5; cont += 1){
 		printf("Digite o seu sal�rio: \n");
 		scanf(" %f", &salary);
 		
 		readjusted_salary = (salary * percent/100) + salary;
 		
 		if(readjusted_salary > higher_salary){
 			higher_salary = readjusted_salary;
		 }
	 }
	 printf("O maior sal�rio � %f", readjusted_salary);
 }
