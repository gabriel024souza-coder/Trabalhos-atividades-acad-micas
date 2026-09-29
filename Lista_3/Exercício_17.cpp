# include <stdio.h>
# include <stdlib.h>

int main () {
	float preco, percentualDescont, valorDescont, valorFinal;
	
	printf("Valor da compra : ");
	scanf("%f", &preco);
		
	
	system("cls");
	
	
	if (preco <= 100) {
		percentualDescont = 0;
		valorDescont = 0;
		valorFinal = preco;
		
		printf("Valor original = R$ %.2f\n", preco);
		printf("Percentual de desconto = %.1f por cento\n", percentualDescont);
		printf("Valor do desconto = R$ %.2f\n", valorDescont);
		printf("Valor final = R$ %.2f", valorFinal);
	} else if (preco <= 500) {
		percentualDescont = 5;
		valorDescont = preco * (5.0/100.0);
		valorFinal = preco - valorDescont;
		
		printf("Valor original = R$ %.2f\n", preco);
		printf("Percentual de desconto = %.1f por cento\n", percentualDescont);
		printf("Valor do desconto = R$ %.2f\n", valorDescont);
		printf("Valor final = R$ %.2f", valorFinal);
	} else {
		percentualDescont = 10;
		valorDescont = preco * (10.0/100.0);
		valorFinal = preco - valorDescont;
		
		printf("Valor original = R$ %.2f\n", preco);
		printf("Percentual de desconto = %.1f por cento\n", percentualDescont);
		printf("Valor do desconto = R$ %.2f\n", valorDescont);
		printf("Valor final = R$ %.2f", valorFinal);
	}
	
	
	
	return 0;
}