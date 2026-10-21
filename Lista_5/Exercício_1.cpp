# include <stdio.h>


float verificarMaior (float n1, float n2) {
	
	if (n1 > n2) {
		return n1;
	} else {
		return n2;
	}
}


int main () {
	float n1 = 6, n2 = 5, maior;
	
	maior = verificarMaior(n1, n2);
	printf("Maior = %.2f", maior);
	
	return 0;
}