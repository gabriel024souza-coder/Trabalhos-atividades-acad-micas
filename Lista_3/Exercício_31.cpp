# include <stdio.h>

int main () {
	float litro, precoL, descont, valorFinal, valorBruto;
	
	printf("Quantidade de litros abastecidos: ");
	scanf("%f", &litro);
	
	printf("Preco do litro: ");
	scanf("%f", &precoL);
	
	
	if (litro < 20) {
    	valorBruto = precoL * litro;
   	    descont = valorBruto * 0.00;
  	    valorFinal = valorBruto - descont;
  	    
	} else if (litro <= 40) {
  		valorBruto = precoL * litro;
   	    descont = valorBruto * 0.07;
    	valorFinal = valorBruto - descont;
    	
	} else {
    	valorBruto = precoL * litro;
    	descont = valorBruto * 0.05;
    	valorFinal = valorBruto - descont;
	}


	printf("\nValor bruto = R$ %.2f\n", valorBruto);
	printf("Desconto = R$ %.2f\n", descont);
	printf("Valor final = R$ %.2f\n", valorFinal);
	
	
	return 0;
}