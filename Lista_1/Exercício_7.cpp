#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float salarioBase, salarioFinal, valorImpostoSegundoSalario;
	int gratificacao = 50, imposto = 10;
	
	printf("Salario-base: ");
	scanf("%f", &salarioBase);
	
	valorImpostoSegundoSalario = (salarioBase * (imposto / 100.0));
	salarioFinal = (salarioBase + gratificacao) - valorImpostoSegundoSalario;
	
	system("cls");
	
	printf("O salario a receber = %.2f", salarioFinal);
	
	
	
	return 0;
}