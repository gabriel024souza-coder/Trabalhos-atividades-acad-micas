# include <stdio.h>
# include <stdlib.h>

int main () {
	char nome[50];
	
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	
	
	system("cls");
	
	
	printf("Ola, %s! Seja bem-vindo(a) a disciplina de Logica de Programacao.", nome);
	
	
	return 0;
}