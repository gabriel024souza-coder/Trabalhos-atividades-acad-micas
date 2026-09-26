# include <stdio.h>

int main () {
	int v[10], quantidadePares = 0;
	
	for (int i = 0; i < 10; i++) {
		printf("%d - Digite o valor inteiro: ", i + 1);
		scanf("%d", &v[i]);
		
		if (v[i] % 2 == 0) {
			quantidadePares++;
		}
	}
	
	printf("\n\nQuantidade de valores pares = %d", quantidadePares);
	
	return 0;
}
