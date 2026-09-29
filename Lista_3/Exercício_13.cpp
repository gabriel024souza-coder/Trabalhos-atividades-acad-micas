# include <stdio.h>
# include <stdlib.h>

int main () {
	int number;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &number);
		
	
	system("cls");
	
	
	if (number % 2 == 0) {
		printf("Par");
	} else {
		printf("Impar");
	}
	
	
	return 0;
}