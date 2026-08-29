#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float deposito, rendimento, valorTotal;
	int taxaJuros;
	
	printf("Valor do deposito: ");
	scanf("%f", &deposito);
	
	printf("Valor da taxa de juros: ");
	scanf("%i", &taxaJuros);
	
	rendimento = deposito * (taxaJuros / 100.0);
	valorTotal = deposito + rendimento;
	
	system("cls");
	
	printf("Valor do rendimento = %.2f\n", rendimento);
	printf("Valor total depois do rendimento = %.2f", valorTotal);
	
	
	
	return 0;
}