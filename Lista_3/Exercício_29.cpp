# include <stdio.h>
# include <stdlib.h>

int main () {
	int senha = 0;
	
	while (senha != 1234) {
		
		printf("Digite uma senha numerica de 4 numeros: ");
		scanf("%d", &senha);
		
		if (senha != 1234) {
			printf("\nSenha incorreta. Tente novamente.\n");
		}
	}
	
	system("cls");
	
	printf("Acesso autorizado.");
	
	
	
	return 0;
}