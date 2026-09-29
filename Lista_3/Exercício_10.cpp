# include <stdio.h>
# include <stdlib.h>

int main () {
	char nomeProduto[30];
	int quantidade;
	float preco, valorTotal;
	
	printf("Nome de produto: ");
	scanf("%s", &nomeProduto);
	
	printf("Quantidade comprada: ");
	scanf("%d", &quantidade);
	
	printf("Preco do produto: ");
	scanf("%f", &preco);
	
	valorTotal = quantidade * preco;
		
	
	system("cls");
	
	
	printf("Valor total da compra = R$ %.2f", valorTotal);
	
	
	
	return 0;
}