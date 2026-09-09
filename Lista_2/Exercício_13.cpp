# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main () {
	int velocidadeMaximaPermitida, velocidadeVeiculo;
	float percentualExcedido;
	char alerta[80], situacao[80];
		
		
	printf("Informe a velocidade maxima permitida na via: ");
	scanf("%d", &velocidadeMaximaPermitida);
	
	printf("Agora informe a velocidade registrada do veiculo: ");
	scanf("%d", &velocidadeVeiculo);
		
	
	
	system("cls");
	
	
	
	if (velocidadeVeiculo <= velocidadeMaximaPermitida) {
		percentualExcedido = 0;
		
		strcpy(situacao, "Nao houve infracao");
		
	} else {
		
		if (velocidadeVeiculo <= velocidadeMaximaPermitida * 1.2) {
			percentualExcedido = ((float)(velocidadeVeiculo - velocidadeMaximaPermitida)
            / velocidadeMaximaPermitida) * 100;
			
			strcpy(situacao, "Infracao media");
			
		} else if (velocidadeVeiculo <= velocidadeMaximaPermitida * 1.5) {
			percentualExcedido = ((float)(velocidadeVeiculo - velocidadeMaximaPermitida)
            / velocidadeMaximaPermitida) * 100;
			
			strcpy(situacao, "Infracao grave");
			
		} else {
			percentualExcedido = ((float)(velocidadeVeiculo - velocidadeMaximaPermitida)
            / velocidadeMaximaPermitida) * 100;
			
			strcpy(situacao, "Infracao gravissima");
		}
	}
	
	
	if (velocidadeVeiculo > 120) strcpy(alerta, "ALERTA: velocidade extremamente elevada");
	
	
	printf("Limite da via = %d km/h\n", velocidadeMaximaPermitida);
	printf("Velocidade registrada = %d km/h\n", velocidadeVeiculo);
	printf("Percentual excedido = %.1f porcento\n", percentualExcedido);
	printf("Classificacao final =  %s. %s", situacao, alerta);
	
	
	
	return 0;
}