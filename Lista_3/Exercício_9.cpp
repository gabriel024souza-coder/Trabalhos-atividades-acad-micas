# include <stdio.h>
# include <stdlib.h>

int main () {
	float kmPercorrido, litroCombust, consumoMedio;
	
	printf("Distancia percorrida (em Km): ");
	scanf("%f", &kmPercorrido);
	
	printf("Quantidade de combustivel utilizada (em L): ");
	scanf("%f", &litroCombust);
	
	consumoMedio = kmPercorrido / litroCombust;
		
	
	system("cls");
	
	
	printf("Consumo medio = %.1f Km/L", consumoMedio);
	
	
	
	return 0;
}