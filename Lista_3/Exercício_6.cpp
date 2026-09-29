# include <stdio.h>
# include <stdlib.h>

int main () {
	float raio, pi = 3.14159, area;
	
	printf("Raio do circulo: ");
	scanf("%f", &raio);
	
	area = pi * (raio * raio);
		
	
	system("cls");
	
	
	printf("Area do circulo = %.1f", area);
	
	
	
	return 0;
}