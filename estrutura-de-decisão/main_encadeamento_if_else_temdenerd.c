#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float height, width, length, daily_intake;
	
	printf("\n \t Reservat�rio de �gua \n");
	
	printf("Digite a altura em cent�metros ");
	scanf("%f", &height);
	printf("Digite a largura em cent�metros ");
	scanf("%f", &width);
	printf("Digite o comprimento em cent�metros ");
	scanf("%f", &length);
	printf("\n consumo m�dio di�rio em litros ");
	scanf("%f", &daily_intake);
	
	//capacidade total em litros
	
	float total_capacity = width * length * height / 1000; // cm -> dm divide por 1000
	
	//autonomia do reservat�rio
	
	float reservoir_autonomy = total_capacity / daily_intake;
	
	//resultado
	
	printf("\n Capacidade total, em litros, do reservat�rio: %.1f", total_capacity);
	printf("\n Autonomia, em dias, do reservat�rio: %.1f", reservoir_autonomy);
	
	//classifica��o do consumo
	
	if(reservoir_autonomy < 2){
		printf("\n Consumo elevado");
	}else if(reservoir_autonomy >= 2 && reservoir_autonomy <= 7 ){
		printf("\n Consumo moderado");
	}else {
		printf("\n Consumo reduzido");
	}
	
}
