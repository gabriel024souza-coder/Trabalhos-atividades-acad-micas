# include <stdio.h>
# include <stdlib.h>

char imprimirOpcoes () {
	char op;
	
	printf("\n--- Escolha sua opcao de pagamento ---\n\n");
	
	printf("A - A vista com 10 porcento de desconto\n");
	printf("B - Em duas vezes (preco da etiqueta)\n");
	printf("C - De 3 ate 10 vezes com 3 porcento de juros ao mes (somente para compras acima de R$ 100.00)\n\n");
	
	printf("Escolha: ");
	scanf("%c", &op);
	
	return op;

}



void casoA (float gasto) {
	system("cls");
	
	printf("-- A vista com 10 porcento de desconto --\n\n");
	printf("Valor total = R$ %.2f", gasto * 0.9);
}



void casoB (float gasto) {
	system("cls");
	
	printf("-- Em duas vezes (preco da etiqueta) --\n\n");
	printf("Valor total = R$ %.2f", gasto);
}



void casoC (float gasto) {
	int parcelamento;
	system("cls");
	
	printf("-- De 3 ate 10 vezes com 3 porcento de juros ao mes (somente para compras acima de R$ 100.00) --\n\n");
	
	printf("Informe o parcelamento (de 3 a 10): ");
	scanf("%i", &parcelamento);
	
	if (parcelamento >= 3 && parcelamento <= 10) {
 		gasto = gasto * (1 + (0.03 * parcelamento));
		 		
		printf("\nValor total = R$ %.2f", gasto);
	} else {
		printf("\nAtencao: o parcelamento esta fora do limite estabelecido...");
	}
	
}



int main () {
	char opcaoEscolhida;
	float gasto;
	
	printf("Total de gasto: R$ ");
	scanf("%f", &gasto);
	
	getchar();
	
	opcaoEscolhida = imprimirOpcoes();	
	
	
	switch(opcaoEscolhida) {
		case 'A':
		case 'a':
			casoA(gasto);
			break;
			
		case 'B':
		case 'b':
			casoB(gasto);
			break;
			
		case 'C':
		case 'c':
			
			if (gasto > 100) {
				casoC(gasto);
			} else {
				printf("Erro: conta abaixo de R$ 100.00");
			}
			break;
			
		default:
			printf("Opcao invalida...");
			break;
	}
	
	return 0;
}