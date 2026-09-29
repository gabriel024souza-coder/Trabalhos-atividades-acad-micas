# include <stdio.h>
# include <stdlib.h>

int main () {
	float divisao, n1, n2, soma, subt, mult;
	
	printf("Informe um numero: ");
	scanf("%f", &n1);
	
	printf("Informe outro numero: ");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	subt = n1 - n2;
	mult = n1 * n2;
	divisao = n1 / n2;
	
	
	system("cls");
	
	
	printf("Soma = %.1f\n", soma);
	printf("Subtracao = %.1f\n", subt);
	printf("Multiplicacao = %.1f\n", mult);
	printf("Divisao = %.1f", divisao);
	
	
	return 0;
}