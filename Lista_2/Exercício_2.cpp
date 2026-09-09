# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main () {
	char nome[50], sexo, estadoCivil[30];
	int tempoCasada;
	
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	
	printf("Seu sexo M/F: ");
	getchar();
	sexo = getchar();
	
	printf("Seu estado civil: ");
	scanf("%s", &estadoCivil);

	
	
	system("cls");
	
	
	
	if (sexo == 'F' || sexo == 'f' && strcmp(estadoCivil, "CASADA") || strcmp(estadoCivil, "casada")) {
		printf("Quantos anos de casada: ");
		scanf("%d", &tempoCasada);
	}
	
	
	
	
	
	return 0;
}