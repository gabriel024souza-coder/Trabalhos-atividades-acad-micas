# include <stdio.h>
# include <stdlib.h>

int main () {
	float peso, altura, imc;
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	printf("E o seu peso: ");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
		
	
	system("cls");
	
	
	if (imc < 18.5) {
		printf("Abaixo do peso");
	} else if (imc <= 24.9){
		printf("Peso adequado");
	} else if (imc <= 29.9) {
		printf("Sobrepeso");
	} else {
		printf("Obesidade");
	}
	
	
	return 0;
}