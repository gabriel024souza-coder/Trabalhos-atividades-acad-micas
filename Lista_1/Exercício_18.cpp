#include <stdio.h>
#include <stdlib.h>

int main() {

    float pesoSacoRacao, gato1, gato2, restoSacoRacao;
    int aposTantosDias = 5;

    printf("Peso do saco de racao (em kg): ");
    scanf("%f", &pesoSacoRacao);
    
    printf("Quantidade de racao para o primeiro gato (em g): ");
    scanf("%f", &gato1);
    
    printf("Quantidade de racao para o segundo gato (em g): ");
    scanf("%f", &gato2);


	restoSacoRacao = pesoSacoRacao - (5 * ((gato1 / 1000.0) + (gato2 / 1000.0)));
	

    system("cls");
    
    
    printf("Em %i dias, restou no saco de racao = %.2f kg", aposTantosDias, restoSacoRacao);



    return 0;
}