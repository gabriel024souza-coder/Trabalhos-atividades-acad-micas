#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	float numero1, numero2, n1Elevado, n2Elevado;
	
	printf("Primeiro numero maior que zero: ");
	scanf("%f", &numero1);
	
	printf("Segudo numero maior que zero: ");
	scanf("%f", &numero2);
	
	n1Elevado = pow(numero1, numero2);
	n2Elevado = pow(numero2, numero1);
	
	system("cls");
	
	printf("Primeiro numero (%.1f) elevado ao segundo (%.1f) = %.1f\n", numero1, numero2, n1Elevado);
	printf("Segundo numero (%.1f) elevado ao primeiro (%.1f) = %.1f", numero2, numero1, n2Elevado);
	
	
	
	return 0;
}