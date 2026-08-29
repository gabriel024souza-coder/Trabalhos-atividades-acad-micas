#include <stdio.h>
#include <stdlib.h>

int main() {

    float precoFabrica, percentualLucroDistribuidor, percentualImpostos, valorLucroDistribuidor, valorImpostos, precoFinalVeiculo;

    printf("Preco de fabrica do veiculo: ");
    scanf("%f", &precoFabrica);
    
    printf("Percentual de lucro do distribuidor: ");
    scanf("%f", &percentualLucroDistribuidor);
    
    printf("Percentual de impostos: ");
    scanf("%f", &percentualImpostos);

	valorLucroDistribuidor = precoFabrica * (percentualLucroDistribuidor / 100);
	valorImpostos = precoFabrica * (percentualImpostos / 100);
    precoFinalVeiculo = precoFabrica + valorLucroDistribuidor + valorImpostos;

    system("cls");

    printf("Valor do lucro do distribuidor = %.2f\n", valorLucroDistribuidor);
    printf("Valor dos impostos = %.2f\n", valorImpostos);
    printf("Preco final do veiculo = %.2f", precoFinalVeiculo);



    return 0;
}