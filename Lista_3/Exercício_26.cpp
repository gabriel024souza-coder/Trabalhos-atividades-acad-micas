# include <stdio.h>

int main () {
	int quantidadeAluno;
	float nota, mediaGeral, acumuladorNota;
	
	printf("Digite a quantidade de alunos de uma turma: ");
	scanf("%d", &quantidadeAluno);
	
	printf("\n");
	
	for (int i = 1; i <= quantidadeAluno; i++) {
		printf("Nota do aluno %d: ", i);
		scanf("%f", &nota);
		acumuladorNota += nota;
	}
	
	mediaGeral = acumuladorNota / quantidadeAluno;
	
	printf("\n");
	
	printf("Media geral da turma = %.1f", mediaGeral);
	
	
	return 0;
}