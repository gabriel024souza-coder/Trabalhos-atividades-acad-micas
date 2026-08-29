#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float n1, n2, n3, mediaPonderada;
	int pesoNota1 = 1, pesoNota2 = 2, pesoNota3 = 3;
	
	printf("Primeira nota: ");
	scanf("%f", &n1);
	
	printf("Segunda nota: ");
	scanf("%f", &n2);
	
	printf("Terceira nota: ");
	scanf("%f", &n3);
	
	mediaPonderada = ((n1 * pesoNota1) + (n2 * pesoNota2) + (n3 * pesoNota3)) / (pesoNota1 + pesoNota2 + pesoNota3);
	
	system("cls");
	
	printf("Media ponderada das notas = %.2f", mediaPonderada);
	
	
	
	return 0;
}