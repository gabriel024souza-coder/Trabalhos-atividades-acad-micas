# include <stdio.h>

int main () {
	int v[6];
	
	for (int i = 0; i < 6; i++) {
		printf("%d - Informe um valor inteiro PAR: ", i + 1);
		scanf("%d", &v[i]);
	}
	
	printf("\nEm ordem inversa = ");
	
	for (int i = 5; i > -1; i--) {
		printf("%d  ", v[i]);
	}
	
	
	
	
	return 0;
}