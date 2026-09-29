# include <stdio.h>
# include <stdlib.h>

int main () {
	float tempCels, tempFahr;
	
	printf("Temperatura em grau Celsius: ");
	scanf("%f", &tempCels);
	
	tempFahr = (tempCels * 9/5) + 32;
		
	
	system("cls");
	
	
	printf("Convertido para Fahrenheit = %.1f", tempFahr);
	
	
	
	return 0;
}