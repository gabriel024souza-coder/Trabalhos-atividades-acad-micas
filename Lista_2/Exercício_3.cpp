# include <stdio.h>
# include <stdlib.h>

int main () {
	int numberInt;
	
	printf("Informe um numero inteiro qualquer: ");
	scanf("%d", &numberInt);
	
	
	
	system("cls");
	
	
	
	if (numberInt % 2 == 0) {
		printf("Numero par");
	} else {
		printf("Numero impar");
	}
	
	
	
	
	return 0;
}