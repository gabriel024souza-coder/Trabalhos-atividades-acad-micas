# include <stdio.h>
# define tam 15

int main () {
	float notas[tam], mediaGeral, soma;
	
	for (int i = 0; i < tam; i++) {
		printf("Nota da prova do aluno %d: ", i + 1);
		scanf("%f", &notas[i]);
		
		soma += notas[i];
	}
	
	mediaGeral = soma / tam;
	
	
	printf("\nNota geral = %.1f", mediaGeral);
	
	
	
	
	return 0;
}