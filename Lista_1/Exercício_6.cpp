#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float salarioBase, salarioFinal, valorGratificacaoSegundoSalario, valorImpostoSegundoSalario;
	int gratificacao = 5, imposto = 7;
	
	printf("Salario-base: ");
	scanf("%f", &salarioBase);
	
	valorGratificacaoSegundoSalario = (salarioBase * (gratificacao / 100.0));
	valorImpostoSegundoSalario = (salarioBase * (imposto / 100.0));
	salarioFinal = (salarioBase + valorGratificacaoSegundoSalario) - valorImpostoSegundoSalario;
	
	system("cls");
	
	printf("O salario a receber = %.2f", salarioFinal);
	
	
	
	return 0;
}