#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int choice;
	
	printf("Escolha: \n");
	printf("1 - Calend�rio \n");
	printf("2 - Hor�rio \n");
	printf("3 - Sair \n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			system("date /t"); //pega o dia o m�s e o ano
			break;
		case 2:
			system("time /t"); //vai pegar o hor�rio
			break;
		case 3:
			printf("Sair");
			break;
		default:
			printf("Op��o inv�lida");
			break;
	}
}
