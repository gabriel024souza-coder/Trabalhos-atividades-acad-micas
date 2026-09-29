# include <stdio.h>

int main () {
	int v[10], maiorAtual = 0, posicao = 0;
	
	for (int i = 0; i < 10; i++) {
		printf("%d - Digite um valor inteiro: ", i + 1);
		scanf("%d", &v[i]);
		
		if (v[i] > maiorAtual) {
			maiorAtual = v[i];
			
			posicao = i;
		}
	}
	
	printf("\nVetor = ");
	
	for (int i = 0; i < 10; i++) {
		printf("%d  ", v[i]);
	}
	
	printf("\nMaior elemento = %d", maiorAtual);
	
	printf("\nE sua posicao = %d", posicao);
	
	
	
	
	return 0;
}