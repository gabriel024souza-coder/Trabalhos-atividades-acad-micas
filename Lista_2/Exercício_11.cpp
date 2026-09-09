# include <stdio.h>
# include <stdlib.h>

int main () {
	int codigo;
	float precoProduto, valorFinal;
		
	printf("Preco do produto: ");
	scanf("%f", &precoProduto);
	
	printf("-----------------------\n");
	printf("Condicao de pagamento:\n\n");
	
	printf("Digite 1 - Caso seja a vista em dinheiro ou cheque: 10 porcento de desconto\n");
	printf("Digite 2 - Caso seja a vista no cartao de credito: 15 porcento de desconto\n");
	printf("Digite 3 - Caso seja em duas parcelas: preco normal, sem juros\n");
	printf("Digite 4 - Caso seja em duas parcelas: acrescimo de 10 porcento sobre o preco normal\n");
	scanf("%d", &codigo);
		
	
	
	system("cls");
	
	
	
	if (codigo == 1) {
		valorFinal = precoProduto * 0.9;
		
		printf("Valor final a ser pago = %.1f", valorFinal);
	} else if (codigo == 2) {
		valorFinal = precoProduto * 0.85;
		
		printf("Valor final a ser pago = %.1f", valorFinal);
	} else if (codigo == 3) {
		valorFinal = precoProduto;
		
		printf("Sem juros, e o valor final a ser pago = %.1f", valorFinal);
	} else if (codigo == 4) {
		valorFinal = precoProduto * 1.1;
		
		printf("Valor final a ser pago = %.1f", valorFinal);
	}
	
	
	
	
	return 0;
}