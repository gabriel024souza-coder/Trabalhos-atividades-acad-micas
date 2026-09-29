# include <stdio.h>
# define tam 10

int main () {
	float numbers[tam] = {1.2, -9, 8.3, -1.2, 7.5, -3, 7.1, 8, -1, -6}, somaPositivos = 0;
	int quantidadeNegativos = 0;
	
	for (int i = 0; i < tam; i++) {
		
		if (numbers[i] < 0) {
			quantidadeNegativos++;
		} else {
			somaPositivos += numbers[i];
		}
		
	}
	
	printf("Quantidade de numeros negativos = %d\n", quantidadeNegativos);
	printf("Soma dos numeros positivos = %.2f", somaPositivos);
	
	
	
	
	return 0;
}