#include <stdio.h>

int main() {
    const int dim1 = 2;
    const int dim2 = 3;
    const int dim3 = 4;
    const int dim4 = 5;

    int matriz[dim1][dim2][dim3][dim4];

    // Populando e apresentando a matriz
    int contador = 1;
    for (int i = 0; i < dim1; i++) {
        printf("Dimensao 1: %d\n", i+1);
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                for (int l = 0; l < dim4; l++) {
                    matriz[i][j][k][l] = contador++;
                    printf("%d ", matriz[i][j][k][l]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}
