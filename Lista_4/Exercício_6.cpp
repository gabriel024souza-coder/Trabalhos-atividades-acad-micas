# include <stdio.h>

int main () {
	int v[10], maiorAtual = 0, menorAtual = 10;
	
	for (int i = 0; i < 10; i++) {
		printf("%d - Digite um valor inteiro: ", i + 1);
		scanf("%d", &v[i]);
		
		if (v[i] > maiorAtual) {
			maiorAtual = v[i];
		}
		
		if (v[i] < menorAtual) {
			menorAtual = v[i];
		}
	}
	
	
	printf("\nMaior elemento do vetor = %d\n", maiorAtual);
	printf("E o menor elemento do vetor = %d", menorAtual);
	
	
	
	
	return 0;
}