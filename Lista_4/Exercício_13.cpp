# include <stdio.h>
# define tam 5

int main () {
	float v[tam], maiorAtual = 0, menorAtual = 10;
	int posicaoMaior = 0, posicaoMenor = 0;
	
	for (int i = 0; i < tam; i++) {
		printf("%d - Digite um valor: ", i + 1);
		scanf("%f", &v[i]);
		
		if (v[i] > maiorAtual) {
			maiorAtual = v[i];
			
			posicaoMaior = i;
		}
		
		if (v[i] < menorAtual) {
			menorAtual = v[i];
			
			posicaoMenor = i;
		}
		
	}
	
	
	printf("\nPosicao do maior = %d", posicaoMaior);
	printf("\nPosicao do menor = %d", posicaoMenor);
	
	
	return 0;
}