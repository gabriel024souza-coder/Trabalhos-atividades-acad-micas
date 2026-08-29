#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int n1, n2, n3, n4, soma;
	
	printf("Primeiro numero: ");
	scanf("%i", &n1);
	
	printf("Segundo numero: ");
	scanf("%i", &n2);
	
	printf("Terceiro numero: ");
	scanf("%i", &n3);
	
	printf("Quarto numero: ");
	scanf("%i", &n4);
	
	soma = n1 + n2 + n3 + n4;
	
	system("cls");
	
	printf("A soma dos numeros = %i", soma);
	
	
	
	return 0;
}