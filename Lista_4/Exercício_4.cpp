# include <stdio.h>

int main () {
	int v[8], X, Y, soma;
	
	for (int i = 0; i < 8; i++) {
		printf("%d - Digite um valor: ", i + 1);
		scanf("%d", &v[i]);
	}
	
	
	printf("\nIndique a primeira posicao que deseja (entre 0 a 7): ");
	scanf("%d", &X);
	
	printf("\nIndique a segunda posicao que deseja (entre 0 a 7): ");
	scanf("%d", &Y);
	
	soma = v[X] + v[Y];
	
	printf("\nSoma da posicao X(%d) + Y(%d) = %d", v[X], v[Y], soma);
	
	
	return 0;
}
