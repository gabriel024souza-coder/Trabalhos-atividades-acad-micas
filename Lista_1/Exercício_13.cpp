#include <stdio.h>
#include <stdlib.h>

int main() {

    float pes, polegadas, jardas, milhas;

    printf("Medida em pes: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;

    system("cls");

    printf("Polegadas = %.2f\n", polegadas);
    printf("Jardas = %.2f\n", jardas);
    printf("Milhas = %.6f", milhas);



    return 0;
}