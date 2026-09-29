# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int main () {
	int opcao = 0;
	float saldo = 1250;
	
	
	while (opcao != 4) {
		printf("Saldo: R$ %.2f\n\n", saldo);
		
		printf("1. Consultar saldo\n");
		printf("2. Depositar\n");
		printf("3. Sacar\n");
		printf("4. Sair\n\n");
		
		printf("Selecione sua opcao: ");
		scanf("%d", &opcao);
		
		
		switch (opcao) {
			
			case 3:
				
				if (saldo > 0) {
					printf("Saldo suficiente: possivel sacar...\n\n");
				} else {
					printf("Saldo insuficiente para o saque.\n\n");
				}
				break;
		}
	}
	
	printf("\nSaindo...");
				
	sleep(3);
	system("cls");
			
	printf("Voce saiu do programa.");
	
	
	
	
	return 0;
}