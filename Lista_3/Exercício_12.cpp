# include <stdio.h>
# include <stdlib.h>

int main () {
	float number;
	
	printf("Informe um numero qualquer: ");
	scanf("%f", &number);
		
	
	system("cls");
	
	
	if (number < 0) {
		printf("Negativo");
	} else if (number == 0) {
		printf("Zero");
	} else {
		printf("Positivo");
	}
	
	
	return 0;
}