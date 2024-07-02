#include <stdio.h>

int main() {
    // Declarar la matriz 2x5
    int matriz2[2][5];

    // Inicializar la matriz con valores
    matriz2[0][0] = 1;
    matriz2[0][1] = 2;
    matriz2[0][2] = 3;
    matriz2[0][3] = 4;
    matriz2[0][4] = 5;
    matriz2[1][0] = 6;
    matriz2[1][1] = 7;
    matriz2[1][2] = 8;
    matriz2[1][3] = 9;
    matriz2[1][4] = 10;

    // Mostrar la matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    // Declarar la matriz inversa
    int matriz_inversa[5][2];

    // Calcular la matriz inversa
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            // La matriz inversa se calcula intercambiando filas y columnas
            matriz_inversa[j][i] = matriz2[i][j];
        }
    }

    // Mostrar la matriz inversa
    printf("\nMatriz inversa:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz_inversa[i][j]);
        }
        printf("\n");
    }

    return 0;
}