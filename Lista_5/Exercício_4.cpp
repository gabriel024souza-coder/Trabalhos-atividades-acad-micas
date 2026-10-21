# include <stdio.h>


float calcularVolume (float alt, float raio, float pi) {
	
	return pi * (raio * raio) * alt;
}


int main () {
	float alt, raio, pi = 3.1414592, volume;
	
	printf("Altura do cilindro: ");
	scanf("%f", &alt);
	
	printf("E seu raio: ");
	scanf("%f", &raio);
	
	volume = calcularVolume(alt, raio, pi);
	
	printf("Volume = %.2f", volume);
	
	return 0;
}