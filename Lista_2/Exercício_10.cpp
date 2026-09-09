# include <stdio.h>
# include <stdlib.h>

int main () {
	float altura, imc, peso;
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	printf("E o seu peso: ");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	
	
	
	system("cls");
	
	
	
	if (imc < 18.5) {
		printf("Seu IMC %.1f resulta em = abaixo do peso", imc);
	} else if (imc >= 18.5 && imc < 25) {
		printf("Seu IMC %.1f resulta em = peso normal", imc);
	} else if (imc >= 25 && imc <= 30) {
		printf("Seu IMC %.1f resulta em = acima do peso", imc);
	} else {
		printf("Seu IMC %.1f resulta em = obeso", imc);
	}
	
	
		
	return 0;
}
   