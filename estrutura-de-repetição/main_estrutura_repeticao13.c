#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Desenvolva um programa que leia o sal�rio bruto de 15 funcion�rios de uma empresa, calcule e exiba o sal�rio l�quido de cada funcion�rio. 
Lembre-se de que o sal�rio l�quido � calculado abatendo o imposto do sal�rio bruto, com base na tabela de imposto abaixo.
Ao final, mostre o total de sal�rios brutos, sal�rios l�quidos e impostos de todos os funcion�rios.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	float gross_salary, net_salary, tax, gross_total, total_liquid, total_tax;
	gross_salary = net_salary = tax = gross_total = total_liquid = total_tax = 0;
	
	for(cont = 1; cont <= 5; cont++){
		printf("Digite seu sal�rio bruto: \n");
		scanf(" %f", &gross_salary);
		if(gross_salary > 999){
			tax = gross_salary * 0.1;
			net_salary = gross_salary - tax;
			printf("Sal�rio liquido = %.2f \n\n", net_salary);
		}else if(gross_salary > 1999){
			tax = gross_salary * 0.15;
			net_salary = gross_salary - tax;
			printf("Sal�rio liquido = %.2f \n\n", net_salary);
		}else if(gross_salary > 9999){
			tax = gross_salary * 0.2;
			net_salary = gross_salary - tax;
			printf("Sal�rio liquido = %.2f \n\n", net_salary);
		}else if(gross_salary > 99999){
			tax = gross_salary * 0.25;
			net_salary = gross_salary - tax;
			printf("Sal�rio liquido = %.2f \n\n", net_salary);
		}else{
			tax = gross_salary * 0.3;
			net_salary = gross_salary - tax;
			printf("Sal�rio liquido = %.2f \n\n", net_salary);
		}
		gross_total += gross_salary;
		total_liquid += net_salary;
		total_tax += tax;
		
	}
		printf("Total sal�rio bruto = %.2f \n", gross_total);
		printf("Total sal�rio liquido = %.2f \n", total_liquid);
		printf("Total imposto = %.2f \n", total_tax);
}
