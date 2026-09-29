#include <stdio.h>
#include <stdlib.h>

int main() {
    char nomeProduto[30];
    int quantidade, opcao = 1, totalVendas = 0;
    float preco, totalVenda, faturamento = 0;

    while (opcao == 1) {
        printf("\n----- CONTROLE DE VENDAS -----\n\n");

        printf("Nome do produto: ");
        scanf("%s", nomeProduto);

        printf("Preco do produto: R$ ");
        scanf("%f", &preco);

        printf("Quantidade vendida: ");
        scanf("%d", &quantidade);

        totalVenda = preco * quantidade;
        faturamento = faturamento + totalVenda;
        totalVendas++;

        printf("\n----- RESUMO DA VENDA -----\n");
        printf("Produto: %s\n", nomeProduto);
        printf("Quantidade: %d\n", quantidade);
        printf("Total da venda: R$ %.2f\n", totalVenda);

        printf("\nDeseja realizar outra venda?\n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
    }

    printf("\n----- RELATORIO FINAL -----\n");
    printf("Total de vendas: %d\n", totalVendas);
    printf("Faturamento total: R$ %.2f\n", faturamento);


    return 0;
}