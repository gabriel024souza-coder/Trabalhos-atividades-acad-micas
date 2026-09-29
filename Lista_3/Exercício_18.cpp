# include <stdio.h>
# include <stdlib.h>

int main () {
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
		
	
	system("cls");
	
	
	if (idade <= 12) {
		printf("Crianca");
	} else if (idade <= 17){
		printf("Adolescente");
	} else if (idade <= 59) {
		printf("Adulto");
	} else {
		printf("Idoso");
	}
	
	
	return 0;
}