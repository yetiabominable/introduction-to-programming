#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*programa que leia um n�mero N e, em seguida, uma lista de N n�meros inteiros.
Esse programa tamb�m deve calcular e mostrar a soma dos n�meros pares e dos n�meros �mpares da lista.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	int num, list_num, sum_even_num, sum_odd_num, cont;
	sum_even_num = sum_odd_num = 0;
	
	printf("Digite a quantidade de n�meros da lista: \n");
	scanf(" %d", &list_num);
	
	for(cont = 1; cont <= list_num; cont++){
		printf("Digite um n�mero: \n");
		scanf(" %d", &num);
		
		if(num%2 == 0){
			sum_even_num += num;
		}else{
			sum_odd_num += num;
		}
	}
	printf("A soma dos n�meros pares � %d e a soma dos n�meros impares � %d \n", sum_even_num, sum_odd_num);	
}
