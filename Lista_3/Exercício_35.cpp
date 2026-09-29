# include <stdio.h>

int main () {
	int qntAluno, qntAprovados = 0, qntRecuperacao = 0, qntReprovados = 0;
	char nome[30];
	float n1, n2, media, mediaGeral, maiorMediaAtual = 0, menorMediaAtual = 10, soma = 0;
	
	printf("Informe a quantidade de alunos: ");
	scanf("%d", &qntAluno);
	
	for (int i = 1; i <= qntAluno; i++) {
		printf("\nNome do aluno %d: ", i);
		scanf("%s", &nome);
		
		printf("Nota da primeira avalicao: ");
		scanf("%f", &n1);
		
		printf("E a nota da segunda avalicao: ");
		scanf("%f", &n2);
		
		media = (n1 + n2) / 2;
		soma += n1 + n2;
		
		if (media < 5) {
			printf("REPROVADO");
			qntReprovados++;
		} else if (media < 7) {
			printf("RECUPERACAO");
			qntRecuperacao++;
		} else {
			printf("APROVADO");
			qntAprovados++;
		}
		
		if (media > maiorMediaAtual) maiorMediaAtual = media;
		
		if (media < menorMediaAtual) menorMediaAtual = media;
		
	}
	
	
	mediaGeral = soma / qntAluno;
	
	printf("\n\n----- RELATORIO -----\n");
	
	printf("\nQuantidade de alunos = %d", qntAluno);
	printf("\nQuantidade de aprovados = %d", qntAprovados);
	printf("\nQuantidade de recuperacao = %d", qntRecuperacao);
	printf("\nQuantidade de reprovados = %d", qntReprovados);
	printf("\nMedia geral da turma = %.1f", mediaGeral);
	printf("\nMaior media = %.1f", maiorMediaAtual);
	printf("\nMenor media = %.1f", menorMediaAtual);
	
	
	
	
	
	
	return 0;
}