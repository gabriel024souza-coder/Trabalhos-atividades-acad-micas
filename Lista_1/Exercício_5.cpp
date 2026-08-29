#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float salario, novoSalario, percentualAumento, valorAumento;
	
	printf("Salario: ");
	scanf("%f", &salario);
	
	printf("Percentual de aumento: ");
	scanf("%f", &percentualAumento);
	
	valorAumento = (percentualAumento / 100) * salario;
	novoSalario = salario + valorAumento;
	
	system("cls");
	
	printf("O valor do aumento de acordo com o salario: %.2f\n", valorAumento);
	printf("O novo salario com o aumento adicionado: %.2f", novoSalario);
	
	
	
	return 0;
}