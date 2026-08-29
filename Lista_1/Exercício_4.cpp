#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float salario, novoSalario;
	
	printf("Salario: ");
	scanf("%f", &salario);
	
	novoSalario = salario * 1.25;
	
	system("cls");
	
	printf("O novo salario com o aumento de 25 porcento = %.2f", novoSalario);
	
	
	
	return 0;
}