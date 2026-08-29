#include <stdio.h>
#include <stdlib.h>

int main() {

    float salarioDepositado, cheque1, cheque2, cheque1Taxado, cheque2Taxado, saldoFinal;

    printf("Salario depositado: ");
    scanf("%f", &salarioDepositado);
    
    printf("Valor do primeiro cheque: ");
    scanf("%f", &cheque1);
    
    printf("Valor do segundo cheque: ");
    scanf("%f", &cheque2);


	cheque1Taxado = cheque1 + (cheque1 * (0.38 / 100.0)); 
	cheque2Taxado = cheque2 + (cheque2 * (0.38 / 100.0));
	saldoFinal = (salarioDepositado - cheque1Taxado) - cheque2Taxado;
	

    system("cls");
    

    printf("Saldo final = %.2f", saldoFinal);



    return 0;
}