# include <stdio.h>
# include <stdlib.h>

int main() {

    int A, B;

    printf("Digite o valor de A (0 = falso, 1 = verdadeiro): ");
    scanf("%d", &A);

    printf("Digite o valor de B (0 = falso, 1 = verdadeiro): ");
    scanf("%d", &B);



	system("cls");



    if (A && B) {
        printf("Ambos sao VERDADEIROS.");
    }
    else if (!A && !B) {
        printf("Ambos sao FALSOS.");
    }





    return 0;
}