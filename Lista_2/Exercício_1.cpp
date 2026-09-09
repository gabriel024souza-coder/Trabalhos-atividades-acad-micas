# include <stdio.h>
# include <stdlib.h>

int main () {
	int a, b, c, somaAB;
	
	printf("Valor inteiro de A: ");
	scanf("%d", &a);
	
	printf("Valor inteiro de B: ");
	scanf("%d", &b);
	
	printf("Valor inteiro de C: ");
	scanf("%d", &c);
	
	somaAB = a + b;
	
	
	system("cls");
	
	
	if (somaAB > c) {
		printf("A soma de A + B e maior que C");
	} else {
		printf("A soma de A + B nao e maior que C");
	}
	
	
	
	
	
	return 0;
}