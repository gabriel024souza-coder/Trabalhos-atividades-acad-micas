# include <stdio.h>

void somarColunas(int A[62][10]) {
    int i, j;

    for (j = 0; j < 10; j++) {
        A[61][j] = 0;

        for (i = 0; i < 61; i++) {
            A[61][j] = A[61][j] + A[i][j];
        }
    }
}

int main () {
    int A[62][10], i, j;

    for (i = 0; i < 61; i++) {
        for (j = 0; j < 10; j++) {
            printf("Informe A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    somarColunas(A);

    printf("\nSoma das colunas:\n");

    for (j = 0; j < 10; j++) {
        printf("%d\t", A[61][j]);
    }

    return 0;
}