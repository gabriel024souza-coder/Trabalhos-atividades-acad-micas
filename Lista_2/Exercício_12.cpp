# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main () {
	int numeroIdentificador;
	float n1, n2, n3, media, ma;
	char conceito, situacao[10];
		
	printf("Numero de identificacao do aluno: ");
	scanf("%d", &numeroIdentificador);
	
	printf("Nota 1 da avaliacao: ");
	scanf("%f", &n1);
	
	printf("Nota 2: ");
	scanf("%f", &n2);
	
	printf("E nota 3: ");
	scanf("%f", &n3);
	
	
	media = (n1 + n2 + n3) / 3;
	ma = (n1 + (n2 * 2) + (n3 * 3) + media) / 7;
		
	
	
	system("cls");
	
	
	
	if (ma < 40) {
		conceito = 'E';
		
		strcpy(situacao, "REPROVADO");
	} else if (ma >= 40 && ma < 60) {
		conceito = 'D';
		
		strcpy(situacao, "REPROVADO");
	} else if (ma >= 60 && ma < 75) {
		conceito = 'C';
		
		strcpy(situacao, "APROVADO");
	} else if (ma >= 75 && ma < 90) {
		conceito = 'B';
		
		strcpy(situacao, "APROVADO");
	} else if (ma >= 90) {
		conceito = 'A';
		
		strcpy(situacao, "APROVADO");
	}
	
	
	printf("Numero de identificacao do aluno = %d\n", numeroIdentificador);
	printf("Nota 1 = %.1f\n", n1);
	printf("Nota 2 = %.1f\n", n2);
	printf("Nota 3 = %.1f\n", n3);
	printf("Media dos exercicios (ME) = %.1f\n", media);
	printf("Media de aproveitamento (MA) = %.1f\n", ma);
	printf("Conceito obtido = %c\n", conceito);
	printf("Situacao final = %s", situacao);
	
	
	
	
	
	return 0;
}