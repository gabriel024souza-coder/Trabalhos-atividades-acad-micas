# include <stdio.h>
# include <stdlib.h>

int main () {
	float hrTrabalh, valorHr, salarioBruto;
	
	printf("Quantidade de horas trabalhadas: ");
	scanf("%f", &hrTrabalh);
	
	printf("Valor por hora: ");
	scanf("%f", &valorHr);
	
	salarioBruto = hrTrabalh * valorHr;
		
	
	system("cls");
	
	
	printf("Salario bruto = R$ %.2f", salarioBruto);
	
	
	
	return 0;
}