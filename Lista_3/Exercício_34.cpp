# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int main () {
	char nomeProduto[30];
	int qntProduto, qntPrSoma = 0, qntVenda = 0, opcao = 1;
	float preco, totalVenda, faturamentoTotal = 0, maiorVendaAtual = 0;
	
	for (int i = 1; opcao == 1; i++) {
		printf("\n----- VENDA %d -----\n\n", i);
		
		printf("Nome do produto %d: ", i);
		scanf("%s", &nomeProduto);
		
		printf("Sua quantidade: ");
		scanf("%d", &qntProduto);
		
		printf("E seu preco: R$ ");
		scanf("%f", &preco);
		
		
		
		totalVenda = preco * qntProduto;
		
		system("cls");
		printf("Calculando...");
		
		sleep(1);
		system("cls");
		
		if (totalVenda > maiorVendaAtual) {
   		 	maiorVendaAtual = totalVenda;
		}
		
		
		printf("Valor total da venda = R$ %.2f\n", totalVenda);
		
		printf("\nDeseja informar outra venda?\n");
		printf("Digite 1 para SIM e 0 para NAO: ");
		scanf("%d", &opcao);
		
		qntPrSoma += qntProduto;
		faturamentoTotal += totalVenda;
		qntVenda++;
	}
	
	
	system("cls");
	
	printf("Quantidade de vendas realizadas = %d\n", qntVenda);
	printf("Faturamento total = R$ %.2f\n", faturamentoTotal);
	printf("Maior venda realizada = R$ %.2f", maiorVendaAtual);




	
	return 0;
}