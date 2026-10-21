# include <stdio.h>


void imprimirInformacoesDoMes (int n) {
	
	switch (n) {
		case 1:
			printf("Mes = Janeiro \nQuantidade de dias = 31");
			break;
			
		case 2:
			printf("Mes = Fevereiro \nQuantidade de dias = 28");
			break;
			
		case 3:
			printf("Mes = Marco \nQuantidade de dias = 31");
			break;
			
		case 4:
			printf("Mes = Abril \nQuantidade de dias = 30");
			break;
			
		case 5:
			printf("Mes = Maio \nQuantidade de dias = 31");
			break;
			
		case 6:
			printf("Mes = Junho \nQuantidade de dias = 30");
			break;
			
		case 7:
			printf("Mes = Julho \nQuantidade de dias = 31");
			break;
			
		case 8:
			printf("Mes = Agosto \nQuantidade de dias = 31");
			break;
			
		case 9:
			printf("Mes = Setembro \nQuantidade de dias = 30");
			break;
			
		case 10:
			printf("Mes = Outubro \nQuantidade de dias = 31");
			break;
			
		case 11:
			printf("Mes = Novembro \nQuantidade de dias = 30");
			break;
			
		case 12:
			printf("Mes = Dezembro \nQuantidade de dias = 31");
			break;
			
		default:
			printf("Numero invalido...");
			break;
	}
}



int main () {
	int n;
	
	printf("Numero inteiro entre 1 e 12: ");
	scanf("%i", &n);
	
	imprimirInformacoesDoMes(n);
	
	
	return 0;
}