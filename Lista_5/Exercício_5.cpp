# include <stdio.h>


float calcularVolume (float raio, float pi) {
	
	return (4 / (3 * pi)) * (raio * raio * raio);
}


int main () {
	float raio, pi = 3.1414592, volume;
	
	printf("Raio da esfera: ");
	scanf("%f", &raio);
	
	volume = calcularVolume(raio, pi);
	
	printf("Volume = %.2f", volume);
	
	return 0;
}