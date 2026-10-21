#include <stdio.h>

void lidandoLocacoesGratuitas(int A[], int B[], int cont) {
    int i;

    for (i = 0; i < cont; i++) {
        B[i] = A[i] / 15;
    }
}

int main() {
    int A[500], qntLocacoesGratuitas[500], i, cont = 0;

    for (i = 0; i < 500; i++) {
        printf("Quantidade de filmes do cliente %d (-1 para sair): ", i);
        scanf("%d", &A[i]);

        if (A[i] == -1) {
            break;
        }

        cont++;
    }

    lidandoLocacoesGratuitas(A, qntLocacoesGratuitas, cont);

    for (i = 0; i < cont; i++) {
        printf("Cliente %d: %d locacoes gratuitas\n", i, qntLocacoesGratuitas[i]);
    }

    return 0;
}