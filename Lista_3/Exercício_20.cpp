# include <stdio.h>
# include <stdlib.h>

int main () {
	float n1, n2;
	int opcao, continuar = 1;
	
	while (continuar == 1) {
		printf("Digite o primeiro numero qualquer: ");
		scanf("%f", &n1);
	
		printf("Digite o segundo numero qualquer: ");
		scanf("%f", &n2);
	
	
		system("cls");
	
	
		printf("------ INFORME A OPERACAO QUE DESEJA ------\n\n");
		printf("1 - para ADICAO.\n");
		printf("2 - para SUBTRACAO.\n");
		printf("3 - para MULTIPLICACAO.\n");
		printf("4 - para DIVISAO.\n\n");
		printf("Digite: ");
		scanf("%d", &opcao);
	
	
		system("cls");
	
	
		switch (opcao) {
			case 1:
				float soma;
				soma = n1 + n2;
				printf("A soma entre os numeros %.1f + %.1f = %.1f", n1, n2, soma);
				continuar = 0;
				break;
			
			case 2:
				float sub;
				sub = n1 - n2;
				printf("A subtracao entre os numeros %.1f - %.1f = %.1f", n1, n2, sub);
				continuar = 0;
				break;
			
			case 3:
				float mult;
				mult = n1 * n2;
				printf("A multiplicacao entre os numeros %.1f x %.1f = %.1f", n1, n2, mult);
				continuar = 0;
				break;
				
			case 4:
				if (n2 == 0) {
					printf("ERRO: DIVISAO POR 0 NAO E ACEITA.\n\n");
					
					printf("Digite 1 para retornar as escolhas dos numeros: ");
					scanf("%d", &continuar);
					
					system("cls");
				} else {
					float div;
					div = n1 / n2;
					printf("A divisao entre os numeros %.1f / %.1f = %.2f", n1, n2, div);
					continuar = 0;
				}
				break;
			
			default:
				printf("Operacao invalida.");
				continuar = 0;
			
		}
	}
	
	
	return 0;
}