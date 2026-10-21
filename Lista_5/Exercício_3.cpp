# include <stdio.h>


float paraCelsius (float tempF) {
	
	return (tempF - 32.0) * (5.0 / 9.0);
}


int main () {
	float tempF, tempC;
	
	printf("Temperatura em Fahrenheit: ");
	scanf("%f", &tempF);
	
	tempC = paraCelsius(tempF);
	
	printf("Em Celsius = %.2f", tempC);
	
	return 0;
}