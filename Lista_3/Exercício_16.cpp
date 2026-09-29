# include <stdio.h>
# include <stdlib.h>

int main () {
	float n1, n2, media;
	
	printf("Primeira nota: ");
	scanf("%f", &n1);
	
	printf("Segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	
	system("cls");
	
	
	if (media < 5) {
		printf("Media = %.1f -> Reprovado", media);
	} else if (media < 7) {
		printf("Media = %.1f -> Recuperacao", media);
	} else {
		printf("Media = %.1f -> Aprovado", media);
	}
	
	
	return 0;
}