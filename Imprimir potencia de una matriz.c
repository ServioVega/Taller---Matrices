#include <stdio.h>

#define TAM 2

void multiplicarMatrices(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int resultado[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < TAM; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void potenciaMatriz(int matriz[TAM][TAM], int n, int resultado[TAM][TAM]) {
    int i;
    int matrizTemporal[TAM][TAM];

    // Copiar la matriz original a la matriz temporal
    for (i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matrizTemporal[i][j] = matriz[i][j];
        }
    }

    // Elevar la matriz a la potencia n
    for (i = 1; i < n; i++) {
        multiplicarMatrices(matrizTemporal, matriz, matrizTemporal);
    }

    // Copiar la matriz temporal al resultado
    for (i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matrizTemporal[i][j];
        }
    }
}

void imprimirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[TAM][TAM] = {
        {1, 2},
        {3, 4}
    };
    int resultado[TAM][TAM];

    potenciaMatriz(matriz, 3, resultado);

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    printf("Matriz elevada a la potencia 3:\n");
    imprimirMatriz(resultado);

    return 0;
}