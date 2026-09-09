# include <stdio.h>
# include <stdlib.h>

int main () {
	float altura, pesoIdeal;
	char sexo;
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	printf("E o seu sexo M/F: ");
	getchar();
	sexo = getchar();
	
	
	
	system("cls");
	
	
	
	if (sexo == 'M' || sexo == 'm') {
		pesoIdeal = (72.7 * altura) - 58;
		
		printf("Seu peso ideal = %.1f", pesoIdeal);
	} else if (sexo == 'F' || sexo == 'f'){
		pesoIdeal =  (62.1 * altura) - 44.7;	
			
		printf("Seu peso ideal = %.1f", pesoIdeal);
	} else {
		printf("Informe os dados corretamente");
	}
	
	
	
	
	return 0;
}