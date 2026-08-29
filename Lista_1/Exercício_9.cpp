#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float area, altura, base;
	
	printf("Valor da base: ");
	scanf("%f", &base);
	
	printf("Valor da altura: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	system("cls");
	
	printf("A area do triangulo vale = %.1f", area);
	
	
	
	return 0;
}