# include <stdio.h>

int main () {
	float hrEntrada, hrSaida, valor, hrPermanencia;
	
	printf("Indique a hora de entrada do veiculo: ");
	scanf("%f", &hrEntrada);
	
	printf("E a hora de saida: ");
	scanf("%f", &hrSaida);

	hrPermanencia = hrSaida - hrEntrada;
	
	if (hrPermanencia <= 1){
		valor = 10;
	} else {
		valor = 10 + (hrPermanencia - 1) * 5;
	}
	
	printf("\nTempo de permanencia: %.2f horas\n", hrPermanencia);
    printf("Valor total: R$ %.2f\n", valor);




	
	return 0;
}