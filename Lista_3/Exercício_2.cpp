# include <stdio.h>
# include <stdlib.h>

int main () {
	int n1, n2, soma;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &n1);
	
	printf("Informe outro numero inteiro: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	
	system("cls");
	
	
	printf("Primeiro numero = %d\n", n1);
	printf("Segundo numero = %d\n", n2);
	printf("Soma = %d", soma);
	
	
	return 0;
}