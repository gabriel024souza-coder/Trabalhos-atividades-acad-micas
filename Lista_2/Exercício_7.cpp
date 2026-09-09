# include <stdio.h>
# include <stdlib.h>

int main () {
	int numberInt, soma5, soma8;
	
	printf("Informe um numero inteiro qualquer: ");
	scanf("%d", &numberInt);
	
	
	
	system("cls");
	
	
	
	if (numberInt % 2 == 0) {
		soma5 = numberInt + 5;
		
		printf("Numero par, seu valor = %d", soma5);
	} else {
		soma8 = numberInt + 8;
		
		printf("Numero impar, seu valor = %d", soma8);
	}
	
	
	
	
	return 0;
}