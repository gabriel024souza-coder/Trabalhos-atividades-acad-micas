#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float area, pi = 3.14, raio;
	
	printf("Valor do raio: ");
	scanf("%f", &raio);
	
	raio = raio * raio;
	area = pi * raio;
	
	system("cls");
	
	printf("A area do triangulo vale = %.2f", area);
	
	
	
	return 0;
}