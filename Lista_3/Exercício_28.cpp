# include <stdio.h>

int main () {
	float number, maiorAtual;
	int i = 2, opcao = 1;
	
	printf("1 - Digite um numero: ");
	scanf("%f", &maiorAtual);
	
	
	while (opcao == 1) {
		printf("%d - Digite um numero: ", i);
		scanf("%f", &number);
		
		if (number > maiorAtual) {
			maiorAtual = number;
		}
		
		
		if (i == 10) {
			opcao = 0;
		}
		
		
		i++;
	}
	
	printf("\n");
	
	printf("O maior numero informado foi = %.1f", maiorAtual);
	
	
	
	return 0;
}