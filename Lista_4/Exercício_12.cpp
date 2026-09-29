# include <stdio.h>
# define tam 5

int main () {
	float v[tam], maiorAtual = 0, menorAtual = 10, media, soma;
	
	for (int i = 0; i < tam; i++) {
		printf("%d - Digite um valor: ", i + 1);
		scanf("%f", &v[i]);
		
		if (v[i] > maiorAtual) {
			maiorAtual = v[i];
		}
		
		if (v[i] < menorAtual) {
			menorAtual = v[i];
		}
		
		soma += v[i];
	}
	
	media = soma / tam;
	
	printf("\nTodos os valores = ");
	
	
	for (int i = 0; i < tam; i++) {
		printf("%.1f  ", v[i]);
	} 
	
	printf("\nMaior valor = %.1f", maiorAtual);
	printf("\nMenor valor = %.1f", menorAtual);
	printf("\nMedia dos valores = %.1f", media);
	
	
	return 0;
}