#include <stdio.h>
#include <stdlib.h>

int main() {

    float horasTrabalhadas, salarioMinimo, salarioBruto, salarioParaReceber, valorHoraTrabalhada, valorImposto;

    printf("Salario minimo: ");
    scanf("%f", &salarioMinimo);
    
    printf("Numero de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

	valorHoraTrabalhada = salarioMinimo / 2;
	salarioBruto = horasTrabalhadas * valorHoraTrabalhada;
	valorImposto = salarioBruto * 0.03;
	salarioParaReceber = salarioBruto - valorImposto;

    system("cls");

    printf("O salario a receber = %.2f", salarioParaReceber);



    return 0;
}