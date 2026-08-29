#include <stdio.h>
#include <stdlib.h>

int main() {

    int anoNascimento, anoAtual = 2026, idade, idadeEm2050;

    printf("Seu ano de nascimento: ");
    scanf("%i", &anoNascimento);

    idade = anoAtual - anoNascimento;
    idadeEm2050 =  2050 - anoNascimento;

    system("cls");

    printf("Sua idade = %i\n", idade);
    printf("Sua idade em 2050 = %i", idadeEm2050);



    return 0;
}