# include <stdio.h>
# include <stdlib.h>

int main () {
	float numb1, numb2, numb3;
	
	printf("Informe o primeiro numero qualquer: ");
	scanf("%f", &numb1);
	
	printf("Informe o segundo numero qualquer: ");
	scanf("%f", &numb2);
	
	printf("E o terceiro numero qualquer: ");
	scanf("%f", &numb3);
		
	
	system("cls");
	
	
	if (numb1 > numb2 && numb1 > numb3) {
		printf("O primeiro numero (%.1f) e o maior", numb1);
	} else if (numb2 > numb1 && numb2 > numb3){
		printf("O segundo numero (%.1f) e o maior", numb2);
	} else {
		printf("O terceiro numero (%.1f) e o maior", numb3);
	}
	
	
	return 0;
}