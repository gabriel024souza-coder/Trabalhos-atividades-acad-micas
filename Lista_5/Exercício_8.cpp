# include <stdio.h>

void alterarMatriz(int A[10][10]) {
    int i, j, aux;

    for (i = 0; i < 10; i++) {
        aux = A[1][i];
        A[1][i] = A[7][i];
        A[7][i] = aux;
    }

    for (i = 0; i < 10; i++) {
        aux = A[i][3];
        A[i][3] = A[i][9];
        A[i][9] = aux;
    }

    for (i = 0; i < 10; i++) {
        aux = A[i][i];
        A[i][i] = A[i][9 - i];
        A[i][9 - i] = aux;
    }

    for (i = 0; i < 10; i++) {
        aux = A[4][i];
        A[4][i] = A[i][9];
        A[i][9] = aux;
    }
}

int main () {
    int A[10][10], i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("Informe o valor de A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    alterarMatriz(A);

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}