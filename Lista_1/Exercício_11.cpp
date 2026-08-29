#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	float numero, aoQuadrado, aoCubo, emRaizQuadrada, emRaizCubica;
	
	printf("Numero positivo e maior que zero: ");
	scanf("%f", &numero);
	
	aoQuadrado = numero * numero;
	aoCubo = numero * numero * numero;
	emRaizQuadrada = sqrt(numero);
	emRaizCubica = cbrt(numero);
	
	system("cls");
	
	printf("Ao quadrado = %.1f\n", aoQuadrado);
	printf("Ao cubo = %.1f\n", aoCubo);
	printf("Em raiz quadrada = %.2f\n", emRaizQuadrada);
	printf("Em raiz cubica = %.2f", emRaizCubica);
	
	
	
	return 0;
}