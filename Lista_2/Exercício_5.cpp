# include <stdio.h>
# include <stdlib.h>

int main () {
	float number, result;
	
	printf("Valor qualquer de um numero: ");
	scanf("%f", &number);
	
	
	
	system("cls");
	
	
	
	if (number > 0) {
		result = number * 2;
		
		printf("Como positivo, seu valor = %.1f", result);
	} else {
		result = number * 3;
		
		printf("Como negativo, seu valor = %.1f", result);
	}
	
	
	
	
	
	return 0;
}