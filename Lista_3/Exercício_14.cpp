# include <stdio.h>
# include <stdlib.h>

int main () {
	float numb1, numb2;
	
	printf("Informe o primeiro numero qualquer: ");
	scanf("%f", &numb1);
	
	printf("Informe o segundo numero qualquer: ");
	scanf("%f", &numb2);
		
	
	system("cls");
	
	
	if (numb1 > numb2) {
		printf("O primeiro numero (%.1f) e o maior", numb1);
	} else {
		printf("O segundo numero (%.1f) e o maior", numb2);
	}
	
	
	return 0;
}