# include <stdio.h>
# include <stdlib.h>

int main () {
	int codigo;
	float hComFrit = 28.00, fFranGrel = 32.00, lasBolon = 35.00, fPeixArroz = 42.00, salEspec = 25.00;
		
		
	printf("Codigo --------- Prato --------- Valor\n\n");

	printf("1      Hamburguer com fritas     %.2f\n", hComFrit);
	printf("2      File de frango grelhado   %.2f\n", fFranGrel);
	printf("3      Lasanha a bolonhesa       %.2f\n", lasBolon);
	printf("4      File de peixe com arroz   %.2f\n", fPeixArroz);
	printf("5      Salada especial           %.2f\n\n", salEspec);
		
	printf("Digite o codigo do prato desejado: ");
	scanf("%d", &codigo);
	
	
	system("cls");
	

	switch (codigo) {
		case 1:
			printf("Prato = Hamburguer com fritas\n");
			printf("Valor = %.2f", hComFrit);
			break;
			
		case 2: 
			printf("Prato = File de frango grelhado\n");
			printf("Valor = %.2f", fFranGrel);
			break;
			
		case 3:
			printf("Prato = Lasanha a bolonhesa\n");
			printf("Valor = %.2f", lasBolon);
			break;
			
		case 4:
			printf("Prato = File de peixe com arroz\n");
			printf("Valor = %.2f", fPeixArroz);
			break;
			
		case 5:
			printf("Prato = Salada especial\n");
			printf("Valor = %.2f", salEspec);
			break;
			
		default:
			printf("Opcao invalida");
	}
	
	
	
	
	
	
	return 0;
}