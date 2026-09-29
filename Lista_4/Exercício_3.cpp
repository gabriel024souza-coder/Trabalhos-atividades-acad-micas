# include <stdio.h>

int main () {
	float numbers[10], results[10];
	
	for (int i = 0; i < 10; i++) {
		printf("%d - Digite o valor real: ", i + 1);
		scanf("%f", &numbers[i]);
		
		results[i] = numbers[i] * numbers[i];
	}
	
	printf("\n\nConjunto dos numeros reais:\n");
	
	for (int i = 0; i < 10; i++) {
		printf("%.1f\n", numbers[i]);
	}
	
	printf("\n\nConjunto dos numeros reais ao quadrado:\n");
	
	for (int i = 0; i < 10; i++) {
		printf("%.1f\n", results[i]);
	}
	
	
	return 0;
}