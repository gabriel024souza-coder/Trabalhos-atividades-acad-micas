# include <stdio.h>
# include <stdlib.h>

int main () {
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
		
	
	system("cls");
	
	
	if (idade < 18) {
		printf("Menor de idade");
	} else {
		printf("Maior de idade");
	}
	
	
	return 0;
}