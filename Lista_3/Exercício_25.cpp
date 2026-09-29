# include <stdio.h>
# include <stdlib.h>

int main () {
	int n, soma;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &n);
	
	printf("\n");
	
	for (int i = 1; i <= n; i++) {
		printf("%d\n", i);
		soma += i;
	}
	
	printf("\n");
	
	printf("Soma = %d", soma);
	
	
	return 0;
}