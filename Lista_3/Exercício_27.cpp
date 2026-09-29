# include <stdio.h>

int main () {
	float nota, percentualAprovacao;
	int acumuladorReprovado = 0, acumuladorAprovado = 0;
	
	for (int i = 1; i <= 10; i++) {
		printf("Nota do aluno %d: ", i);
		scanf("%f", &nota);
		
		if (nota < 7) {
			acumuladorReprovado++;
		} else {
			acumuladorAprovado++;
		}
	}
	
	percentualAprovacao = (acumuladorAprovado / 10.0) * 100.0;
	
	printf("\n");
	
	printf("Quantidade de aprovados = %d\n", acumuladorAprovado);
	printf("Quantidade de reprovados = %d\n", acumuladorReprovado);
	printf("Percentual de aprovacao = %.1f por cento", percentualAprovacao);
	
	
	
	return 0;
}