#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	float altura;
	char sexo;
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	printf("Informe a sua altura: ");
	scanf("%f",&altura);
	fflush(stdin);
	printf("Qual o seu sexo? (M - Masculino ou F - Feminino) ");
	scanf("%c", &sexo);
	
	//Resultado
	
	printf("A sua idade � %d \n", idade);
	printf("A sua altura � %.2f \n", altura); //.2 expecifica que ser� considerado duas casas decimais
	printf("O seu sexo � %c", sexo);
}
